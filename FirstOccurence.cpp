#include<iostream>
using namespace std;

 //Naive method - Lineaar search

// Iterative approach
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

// Recursive approach

int firstOccurence2(int arr[], int n, int low, int high, int x)
{

    int mid = (low + high)/2;

    if(low>high)
    {
        return -1;
    }

    if (arr[mid] == x)
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
                return firstOccurence2(arr,n,low,mid-1,x);
            }
    }

    else if (arr[mid]>x)
    {
        return firstOccurence2(arr,n,low,mid-1,x);
    }

    else
    {
        return firstOccurence2(arr,n,mid+1,high,x);
    }
    

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

    cout << firstOccurence(arr,n,x)<<endl;
    cout << firstOccurence2(arr,n,0,n-1,x)<<endl;


}