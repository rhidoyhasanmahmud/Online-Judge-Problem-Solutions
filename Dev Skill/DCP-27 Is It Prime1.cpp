#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,num,calc,i;
    cin>>n;
    while(n--)
    {
        cin>>num;
        calc=0;
        if(num==1 || num==0)
            cout<<"No"<<endl;
        else
        {
            for( i=2; i<=sqrt(num); i++)
            {
                if(num%i==0)
                {
                    calc=1;
                    break;
                }
            }
            if(calc==0)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }
    return 0;
}
