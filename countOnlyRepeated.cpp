/*

Given an array arr[] of N positive integers, where elements are consecutive (sorted). Also, there is a single element which is repeating X (any variable) number of times. Now, the task is to find the element which is repeated and number of times it is repeated.
Note: If there's no repeating element, Return {-1,-1}.


Example 1:

Input:
N = 5
arr[] = {1,2,3,3,4}
Output: 3 2
Explanation: In the given array, 3 is 
occuring two times.

*/

#include<iostream>
using namespace std;

pair<int, int> findRepeating(int *arr, int n){
        int low = 0, high = n-1;
        pair<int,int> p;
        bool flag = false;
        p.first = -1;
        p.second = -1;
        
        while(low<high)
        {
            int mid = (low+high)/2;
            if(arr[mid]==arr[mid-1] || arr[mid]==arr[mid+1])
            {
                p.first = arr[mid];
                flag = true;
                break;
            }
            if(mid-low==arr[mid]-arr[low])
            {
                low = mid+1;
            }
            else
            {
                high = mid-1;
            }
            
        }
        
        
        if(flag)
        {
            p.second = n - (arr[n-1]-arr[0]);
        }
        
        return p;
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
    pair<int,int> ans = findRepeating(arr,n);
    cout << ans.first << " " << ans.second<< endl;

}