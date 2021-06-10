#include <iostream>
using namespace std;

int Occurences(int arr[], int n, int k)
{
    int ans=0;
    struct elementcount
    {
        int ele;
        int ct;
    };

    struct elementcount s[k-1];
    for(int i=0;i<k-1;i++)
    {
        s[i].ct=0;
    }

    for(int i=0;i<n;i++)
    {
        int j;
        for(j=0;j<k-1;j++)
        {
            if(s[j].ele == arr[i])
            {
                s[j].ct++;
                break;
            }
        }

        if(j==k-1)
        {
            int l;
            for(l=0;l<k-1;l++)
            {
                if(s[l].ct==0)
                {
                    s[l].ele=arr[i];
                    s[l].ct = 1;
                    break;
                }
            }

            if(l==k-1)
            {
                for(l=0;l<k-1;l++)
                {
                    s[l].ct--;
                }
            }
        }
    }

    for(int i=0;i<k-1;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(s[i].ele==arr[j])
            count++;
        }

        if(count>(n/k))
        ans++;
    }

        return ans;

}

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << Occurences(arr,n,k);
    

    return 0;
}






/*

 int ans=0;
        struct elementCount
        {
            int element;
            int count;
        };
        
        
        struct elementCount s[k-1];
        
        
        for(int i = 0; i<k-1;i++)
        {
            s[i].count=0;
        }

        for(int i=0;i<n;i++)
        {
            int j;
            for(j=0;j<k-1;j++)
            {
                if(s[j].element==arr[i])
                {
                    s[j].count++;
                    break;
                }
            }
            
            if (j==k-1)
            {
                int l;
                for(l=0;l<k-1;l++)
                {
                    if(s[l].count==0)
                    {   
                        
                        s[l].element = arr[i];
                        s[l].count = 1;
                        break;
                    }
                }
                
                if(l==k-1)
                {
                    for(l=0;l<k-1;l++)
                    {
                        s[l].count--;
                    }
                }
            }
            
        }
        //cout<<s[0].element<<" "<<s[0].count<<endl;
        for(int i=0;i<k-i;i++)
        {
            int counter=0;
            for(int j=0;j<n;j++)
            {
                if(s[i].element==arr[j])
                counter++;
            }
            
            if(counter > (n/k))
            ans++;
        }
        
        return ans;
        

*/