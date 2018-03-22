#include<bits/stdc++.h>
#define LL long long
using namespace std;

void Go(LL a, LL b,LL  i)
{
    LL sum=0;
    for(int k=a; k<=b; k++)
    {
        if(k%2==1)
        {
            sum+=k;
        }
    }
    printf("Case %lld: %lld\n",i,sum);

}
int main()
{
    LL a,b,n;
    scanf("%lld",&n);
    for(LL i=1; i<=n; i++)
    {
        scanf("%lld %lld",&a,&b);
        Go(a,b,i);
    }
    return 0;
}
