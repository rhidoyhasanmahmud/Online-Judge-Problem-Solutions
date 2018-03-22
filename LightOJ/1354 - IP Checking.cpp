#include<bits/stdc++.h>
using namespace std;
char arr[4];
long a,b,c,d;
long m,n,o,p;
long fromBin(long n)
{
    long factor = 1;
    long total = 0;

    while (n != 0)
    {
        total += (n%10) * factor;
        n /= 10;
        factor *= 2;
    }
    return total;
}
int main()
{
    int T;
    cin>>T;
    for(int i=1; i<=T; i++)
    {
        cin>>a>>arr[0]>>b>>arr[1]>>c>>arr[2]>>d;
        cin>>m>>arr[0]>>n>>arr[1]>>o>>arr[2]>>p;
        m = fromBin(m);
        //cout<<m<<endl;
        n = fromBin(n);
        //cout<<n<<endl;
        o = fromBin(o);
        //cout<<o<<endl;
        p = fromBin(p);
        //cout<<p<<endl;
        if(a==m && b==n && c==o && d==p)
            cout<<"Case "<<i<<": "<<"Yes"<<endl;
        else
            cout<<"Case "<<i<<": "<<"No"<<endl;
    }
    return 0;
}
