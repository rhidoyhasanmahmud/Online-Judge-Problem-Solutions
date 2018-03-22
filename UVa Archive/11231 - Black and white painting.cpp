#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int  t,b,w,m,n,c;
    while(scanf("%lld%lld%lld",&m,&n,&c))
    {
        if(m==0 && n==0 && c==0)
            break;
        else
        {
            t = 0, b = 0, w = 0;
            t = (n-7) * (m-7);
            b = (t/2);
            w = (t-b);
            if(c==0)
                cout<<b<<endl;
            else
                cout<<w<<endl;
        }
    }
    return 0;
}
