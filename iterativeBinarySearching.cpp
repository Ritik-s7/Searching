#include<iostream>
using namespace std;

int iterativeBinarySearch(int arr[], int n, int x)
{
    int low = 0;
    int high = n-1;

    while (low<high)
    {
        int mid = (low+high)/2;

        if(arr[mid]==x)
        {
            return mid;
        }

        else if(arr[mid]>x)
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

int recursiveBinarySearch(int arr[], int n, int low, int high,int x)
{
    int mid = (low+high)/2;

    if (arr[mid]>x)
    {
        return recursiveBinarySearch(arr,n,low,mid-1,x);
    }

    else if (arr[mid]<x)
    {
        return recursiveBinarySearch(arr,n,mid+1,high,x);
    }

    else
    {
        return mid;
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

cout << iterativeBinarySearch(arr,n,x) <<endl;
cout << recursiveBinarySearch(arr,n,0,n-1,x) << endl;



}