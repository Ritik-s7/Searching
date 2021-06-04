#include<iostream>
using namespace std;

int count1(int arr[], int n)
{
     int low = 0;
     int high = n-1;

     while (low<=high)
     {
         int mid = (low+high)/2;
        //cout<< low <<" "<< mid <<" "<<high<<endl;

         if(arr[mid]==0)
         {
            low = mid+1;
         }

         if(arr[mid]==1)
         {
             if (mid==0  || arr[mid-1]!=1)
             {
                 return (n-mid);
             }
             else
             {
                 high = mid-1;
             }
             
         }

     }
    
         return 0;

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

    cout << count1(arr,n)<<endl;
    return 0;
}

