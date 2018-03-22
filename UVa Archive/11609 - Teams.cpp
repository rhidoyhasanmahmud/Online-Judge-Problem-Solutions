#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define LL long long int
LL bigMod (LL b, LL p)
{
    if ( p == 0 ) return 1;
    if ( p == 1 ) return b;

    if ( p % 2 == 0 )
    {
        LL x = bigMod (b, p / 2) % MOD;
        return (x * x) % MOD;
    }
    else
        return (bigMod (b, p - 1) % MOD) * (b % MOD);
}
int main()
{
    int T;
    LL n;
    cin>>T;
    for( int i=1; i<=T; i++)
    {
        cin>>n;
        int sum = ((bigMod (2, n - 1) * (n % MOD)) % MOD);
        printf("Case #%d: %d\n",i,sum);
    }
    return 0;
}
