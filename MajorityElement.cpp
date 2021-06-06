#include<iostream>
using namespace std;

//arr[] = {1 1 2 2 6 1 1 1 1 7 2}
int majorityElement(int arr[], int n)
{
    int count = 1;
    int curr=0;
    for (int i = 1; i < n; i++)
    {

        if (arr[i]==arr[curr])
            count++;

        else
            count--;

        if (count==0)
        {
            curr = i;
            count = 1;
        }   
    }

    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[curr])
        {
            count++;
        }
        
    }

    //cout << count <<endl;

    if (count<=(n/2))
        curr = -1;
    
return curr;
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

    cout << majorityElement(arr,n);
    return 0;
}