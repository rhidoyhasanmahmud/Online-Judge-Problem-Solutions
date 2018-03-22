#include<bits/stdc++.h>
using namespace std;
long long H(int n)
{
    long long r = 0, m = sqrt(n), i;
    for (i = 1; i <= m; ++i)
        r += n / i;
    return (r << 1) - m * m;
}

int main()
{
    long long  n,m;
    cin>>m;
    for(long long  k=1; k<=m; k++)
    {
        cin>>n;
        cout<<H(n)<<endl;
    }
    return 0 ;
}
