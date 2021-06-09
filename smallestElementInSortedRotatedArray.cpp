/*
9. Minimum Number in a sorted rotated array 
Easy Accuracy: 46.82% Submissions: 17186 Points: 2
Given an array of distinct elements which was initially sorted. This array is rotated at some unknown point. 
The task is to find the minimum element in the given sorted and rotated array. 

Example 1:

Input:
N = 10
arr[] = {2,3,4,5,6,7,8,9,10,1}
Output: 1
Explanation: The array is rotated 
once anti-clockwise. So minium 
element is at last index (n-1) 
which is 1.
Example 2:

Input:
N = 5
arr[] = {3,4,5,1,2}
Output: 1
Explanation: The array is rotated 
and the minimum element present is
at index (n-2) which is 1.

*/


#include<iostream>
using namespace std;

int smallestEle(int arr[], int low, int high)
{
    
 if(low>high)
    return arr[0];
    
    if(low == high)
    return arr[low];
    
    int mid = (low+high)/2;
    
    if(mid>low  && arr[mid]<arr[mid-1])
    return arr[mid];
    
    if(mid < high && arr[mid]>arr[mid+1])
    return arr[mid+1];
    
    if(arr[high]>arr[mid])
    return smallestEle(arr,low,mid-1);
    
    return smallestEle(arr,mid+1,high);
    
}

int main()
{

    int n;
    cin >> n ;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << smallestEle(arr,0,n-1);

}