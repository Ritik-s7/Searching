#include<iostream>
using namespace std;

int firstOccurence(int arr[], int n, int x)
{

int low = 0;
int high = n-1;

    while (low<=high)
    {
        int mid = (low+high)/2;

        //cout<< low <<" "<< mid <<" "<<high<<endl;

        if (arr[mid]==x)
        {
            if (mid==0)
            {
                return 0;
            }
            
            else if(arr[mid-1] != x)
            {
                return mid;
            }
            else
            {
                high = mid-1;
                continue;
            }
        }

        else if(arr[mid] > x)
        {
            high = mid-1;
        }

        else
        {
            low = mid + 1;
        }   
    }
    return -1;
}

int lastOccurence(int arr[], int n, int x)
{

int low = 0;
int high = n-1;

    while (low<=high)
    {
        int mid = (low+high)/2;

        //cout<< low <<" "<< mid <<" "<<high<<endl;

        if (arr[mid]==x)
        {
            if (mid==n-1)
            {
                return n-1;
            }
            
            else if(arr[mid+1] != x)
            {
                return mid;
            }
            else
            {
                low = mid+1;
                continue;
            }
        }

        else if(arr[mid] > x)
        {
            high = mid-1;
        }

        else
        {
            low = mid + 1;
        }   
    }
    return -1;
}

int main()
{
     int n,x;
    cin >> n >> x;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int first = firstOccurence(arr,n,x);
    if(first == -1)
    {
        return 0;
    }
    else
    {
        cout << (lastOccurence(arr,n,x)-first+1);
    }
}