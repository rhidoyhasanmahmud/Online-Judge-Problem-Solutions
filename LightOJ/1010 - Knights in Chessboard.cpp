#include<bits/stdc++.h>
using namespace std;
int solve(int n, int m)
{
    if (n > m) swap(n, m);
    if (n == 1) return m;
    if (n == 2)
        return (m / 4) * 4 + min((m % 4), 2) * 2;
    return (n * m + 1) >> 1;
}
int main()
{
    int a,b,n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d%d",&a,&b);
        printf("Case %d: %d\n", i, solve(a, b));
    }
    return 0;
}
--------------------------------------------------------------------------------------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int m,n,t,ans,x;
    scanf("%lld",&t);
    for(int i=1; i<=t; i++)
    {
        scanf("%lld%lld",&m,&n);
        ans=0,x=0;
        long long int mn = m*n;
        if(m==1 || n==1)    ans = mn;
        else if(m==2 || n==2)
        {
            if(m==2) x = n;
            else     x = m;
            if(x%4 == 1)      ans = x+1;
            else if(x%4 == 2) ans = x+2;
            else if(x%4 == 3) ans = x+1;
            else if(x%4 == 0) ans = x;
        }
        else if(mn%2 == 0) ans = mn/2;
        else
            ans = (mn/2)+1;
        printf("Case %d: %d\n", i, ans);
    }
    return 0;
}

