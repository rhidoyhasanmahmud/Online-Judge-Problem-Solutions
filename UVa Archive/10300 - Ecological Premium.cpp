#include<bits/stdc++.h>
using namespace std;
#define l long long int
int main()
{
    l sum,a,b,c,n,m;
    scanf("%lld",&m);
    for(int k=1; k<=m; k++)
    {
        scanf("%lld",&n);
        sum=0;
        for(int i=1; i<=n; i++)
        {
            scanf("%lld %lld %lld",&a,&b,&c);
            sum+=a*c;
        }
        printf("%lld\n",sum);
    }
    return 0;
}
