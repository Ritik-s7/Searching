#include<iostream>
using namespace std;

// 7 10 20 15 12 45 65 70

// Method 1 - Naive Approach - check Linearly

int peakEle(int arr[], int n)
{

    int low = 0;
    int high = n-1;

    while (low<=high)
    {
        int  mid = (low+high)/2;
        cout<< low <<" "<< mid <<" "<<high<<endl;

        if((mid==0 || arr[mid]>=arr[mid-1]) && (mid == (n-1) || arr[mid]>=arr[mid+1]))
        {
                return mid;
        }

        if (mid>0 & arr[mid]<=arr[mid-1])
        {
            high = mid-1;
        }
        
        else
        {
            low = mid+1;
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

    cout << peakEle(arr,n);

    return 0;
}