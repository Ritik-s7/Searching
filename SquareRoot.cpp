 #include<iostream>
 using namespace std;

// 10 - 1 2 3 4 5 6 7 8 9 10 11 12 13 .....25

 int main()
 {
    int x;
    cin >> x;

    int res;

    int low = 1;
    int high = x;

    if (x == 0)
    {
        res = 0;
    }

    

    while(low<=high)
    {
        int mid = (low+high)/2;
        //cout<< low <<" "<< mid <<" "<<high<<endl;
        if(mid*mid == x)
        {
            res = mid;
            break;
        }

        else if(mid*mid>x)
        {

                high = mid-1;
            
           
        }

        else if(mid*mid<x)
        {
            
                low = mid+1;
                res = mid;
 
        }

    }

      cout << res<< endl;
    


 }