#include<iostream>
using namespace std;

int medain(int  arr1[], int arr2[], int n1, int n2)
{

    int min1, max1, min2, max2;
    int low=0 ,high = n1;
    int i1, i2;
    int Medain;

    while (low<=high)
    {
        i1 = (low+high)/2;
        i2 = ((n1+n2+1)/2) - i1;

        int  max1 = (i1==0)? INT_MIN : arr1[i1-1];
        int  min1 = (i1==n1)?INT_MAX : arr1[i1];
        int max2 = (i2==0)? INT_MIN : arr2[i2-1];
        int min2 = (i2==n2)? INT_MAX :  arr2[i2];

        if (min2>=max1 && min1 >= max2)
        {
            if((n1+n2)%2==0)
                Medain =  (max(max1,max2) + min(min1,min2))/2;
            else
                Medain =  (max(max1,max2));
            
        }

        if (max1 > min2)
            high = i1-1;

        else
            low = i1+1;
        
    }

    return Medain;
    
}

int main()
{
    int n1 = 6, n2 = 9;
    int arr1[] = {10,15,20,25,30,40};
    int arr2[] = {5,7,10,20,40,60,70,80,100};

    cout << medain(arr1, arr2, n1, n2);

    return 0;
}