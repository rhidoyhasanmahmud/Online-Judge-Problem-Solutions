#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll GCD(ll a,ll b)
{
    return b==0 ? a : GCD(b,a%b);
}
ll LCM(int a,int b)
{
    return (a/GCD(a,b)*b);
}
int main()
{
    ll N;
    ll a,b;
    cin>>N;
    for(int i=1; i<=N; i++)
    {
        cin>>a>>b;
        if(b%a==0)
            cout<<GCD(a,b)<<" "<<LCM(a,b)<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}


