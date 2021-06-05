#include<iostream>
using namespace std;
// Find the pair in a sorted array whose sum is equal to a given value

bool FindPair(int arr[], int n, int sum)
{

    int currSum;
    int low=0, high=n-1;
   
    while(low<high)
    {
        currSum = arr[low]+arr[high];
        //cout << low << " " << high<< " " << currSum<<endl;

        if (currSum == sum)
        {
            cout << low << " " << high<<endl;
            return true;
        }

        else if(currSum > sum)
            high--;

        else
        {
            low++;
        }

    }
    
    return false;

}

bool findTriplet(int arr[], int n, int sum)
{
    int currSum;
    
        for(int i=1; i< n-1; i++)
        {  
            int low=0, high=n-1;
            while(low<=high)
            {
                currSum = arr[low]+arr[high];
                //cout << low << " " << high<< " " << currSum<<endl;
                //cout << i << endl;
                if (currSum == sum-arr[i])
                {
                cout << low << " " << arr[i] << " "<< high<<endl;
                return true;
                }
                if (currSum > sum-arr[i])
                high--;

                else
                low++;
            }   
        }
        return false;

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

    cout<< FindPair(arr,n,x);
    cout << " " << endl;
    cout<<findTriplet(arr,n,x);

    return 0;

}