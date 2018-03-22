#include<bits/stdc++.h>
using namespace std;
long long int dp[10005];
long long int a, b, c, d, e, f;
long long int fn(long long int n)
{
    if(n==0)
        return a% 10000007;
    if(n==1)
        return b% 10000007;
    if(n==2)
        return c% 10000007;
    if(n==3)
        return d% 10000007;
    if(n==4)
        return e% 10000007;
    if(n==5)
        return f% 10000007;
    if(dp[n] != -1)
        return dp[n];
    else
    {
        dp[n] = ( fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6) )% 10000007;
        return dp[n];
    }
}
void zero_kor_sob()
{
    for(int i=0; i<10001; i++)
        dp[i] = -1;
}
int main()
{
    long long int n, caseno = 0, cases;
    scanf("%lld", &cases);
    while( cases-- )
    {
        zero_kor_sob();
        scanf("%lld %lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %lld: %lld\n", ++caseno, fn(n) % 10000007);
    }
    return 0;
}
