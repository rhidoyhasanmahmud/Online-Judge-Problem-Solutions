#include<bits/stdc++.h>
using namespace std;
int arr[1005];
int num[1005];
#define ll long long int
ll GCD(ll x,ll xx)
{
    return xx==0 ? x : GCD(xx,x%xx);
}
int main()
{
    int T,n;
    cin>>T;
    for(int j=1; j<=T; j++)
    {
        ll  calc = 0,temp=0,a=1,b=0,temp1=0;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            num[i] = arr[i];
            a*=num[i];
        }
        for(int i=0; i<n; i++)
        {
            temp = a/num[i];
            b+=temp;
        }
        a*=n;
        temp1 = GCD(a,b);
        cout<<"Case "<<j<<": "<<a/temp1<<"/"<<b/temp1<<endl;
    }
    return 0;
}
