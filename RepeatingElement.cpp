#include<iostream>
using namespace std;


// Method 1 - O(n) time and O(n) space
int RepeatingElement(int arr[], int n)
{

    int counterArr[n];
    for (int i = 0; i < n; i++)
    {
        counterArr[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {

        counterArr[arr[i]]++;
        
        if (counterArr[arr[i]]>1)
        {
            return arr[i];
        }

    }
    
    return -1;
}

// Method 2 - O(n) time and O(1) space

int RepeatingElement2(int  arr[], int n)
{
    int slow = arr[0]+1;
    int fast = arr[0]+1;

    do
    {
        slow = arr[slow]+1;
        fast = arr[arr[fast]+1]+1;
    } 
    while (slow != fast);
    

    slow = arr[0]+1;
    while (slow != fast)
    {
        slow = arr[slow]+1;
        fast = arr[fast]+1;
    } 


    return slow-1; 
    

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

    cout << RepeatingElement(arr,n)<<endl;
    cout << RepeatingElement2(arr,n)<<endl;

}