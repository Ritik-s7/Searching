#include<iostream>
using namespace std;

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
    }

    for (int i = 0; i < n; i++)
    {
        if (counterArr[i]>1)
        {
            return i;
        }
        
    }
    
    return -1;
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

    cout << RepeatingElement(arr,n);

}