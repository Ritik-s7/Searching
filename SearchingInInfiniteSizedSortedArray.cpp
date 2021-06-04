#include<iostream>
using namespace std;

// Unbounded Binary search Algorithm - here we don't know  the size of array and we need to search an element in O(logn) time.

int Search(int arr[],int x)
{


    if(arr[0]==x)
    return 0;
    int high=1;

    while (arr[high]<x)
    {
        high = 2*high;
    }
    //cout <<high<<endl;
    int low = high/2;
    while (low<=high)
    {
        int mid = (low+high)/2;
    //cout<< low <<" "<< mid <<" "<<high<<endl;
        if(arr[mid]==x)
        return mid;
    
        else if(arr[mid] > x)
        high = mid-1;
        
        else
        low = mid+1;

    }
    return -1;
}

int main()
{

    int arr[] = {1,2,3,4,5,6,10,15,20,25,30,35,40,50,60,75,80,90,100,115,150,165,168,200,250,300};
    int x;
    cin >> x;

cout << Search(arr,x);

}