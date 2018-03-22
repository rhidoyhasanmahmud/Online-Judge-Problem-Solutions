#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,a,calc;
    scanf("%lld",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%lld",&a);
        calc=0;
        calc=2*pow(a-1,2);
        printf("%lld\n",calc);
    }
    return 0;
}
