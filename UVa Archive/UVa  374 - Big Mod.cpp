#include<bits/stdc++.h>
#define inta long long
using namespace std;
int bigmod(inta a, inta b, inta m)
{
    if(b==0) return 1%m;
    inta x = bigmod(a,b/2,m);
    x = (x*x)%m;
    if(b%2==1) x = (x*a)%m;
    return x;
}
int main()
{
    inta a,b,c;
    while(cin>>a>>b>>c)
    {
        inta res= bigmod(a,b,c);
        cout<<res<<endl;
        res=0;
    }
    return 0;
}
