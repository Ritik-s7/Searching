/*

13. Smallest Positive missing number 
Medium Accuracy: 45.09% Submissions: 64061 Points: 4
You are given an array arr[] of N integers including 0. The task is to find the smallest positive number missing from the array.

Example 1:

Input:
N = 5
arr[] = {1,2,3,4,5}
Output: 6
Explanation: Smallest positive missing 
number is 6.
Example 2:

Input:
N = 5
arr[] = {0,-10,1,3,-20}  
Output: 2
Explanation: Smallest positive missing 
number is 2.

*/

#include<iostream>
using namespace std;


// Not working in some cases
int smallestNum(int arr[], int n)
{
    int ele = n+1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        arr[i] = 0;
    }
    // arr = {0 0 1 3 0}
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0 && arr[i]<=n)
        {
            if(arr[abs(arr[i])-1]==0)
            arr[abs(arr[i])-1] = -1;
            else
            arr[abs(arr[i])-1] = -arr[abs(arr[i])-1];
        }

    }

    

 for(int i=0;i<n;i++)
    {
        cout << arr[i]<<" ";
    }

    int count = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=0)
        {
        ele = i+1;
        break;
        }
    }

    return ele;
}


// Method 2 - Working in all cases
int smallestPositive(int arr[], int n)
{
    bool One = false,Zero = false;
    for(int i=0; i<n;i++)
    {
        if(arr[i]==1)
            One = true;
        if(arr[i]==0)
            Zero = true;
    
    }

    if(One == false)
    return 1;

    for(int i=0; i<n;i++)
    {
        if(arr[i]<=0 || arr[i]>n)
        {
            arr[i] = 1;
        }

    }

    for(int i=0; i<n;i++)
    {
        arr[arr[i]%n] = arr[arr[i]%n]+n;
    }

    for(int i=1; i<n;i++)
    {
        if(arr[i]<n)
        {
            return i;
        }
    }
    if(Zero)
    return n;

    return n+1;

}

int main()
{

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << smallestPositive(arr,n);


}