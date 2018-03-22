#include<bits/stdc++.h>
using namespace std;
 #define L long long int
int main()
{
    int a,b;
    cin>>a>>b;
    if(a-b==0)
    {
        cout<<1<<endl;
    }
    else
    {
        for(int i=1;; i++)
        {
            int  m = pow(3,i);
            int  n  =  pow(2,i);
            if(m*a>n*b)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}

