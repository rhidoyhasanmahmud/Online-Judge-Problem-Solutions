/*
*******************************************************************************
**                  ===================================                      **
**                  =  Name       :  Hasan Mahmud
**                  =  Institute  :  UAP
**                  =  Dept       :  CSE
**                  =  Email      :  hasan404cse@gmail.com
**                  ===================================                      **
*******************************************************************************
*/
#include<bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
#define s scanf
#define p printf
typedef long long int ll;
using namespace std;
ll fact(ll n)
{
    if(n==0)
        return 1;
    ll sum = n*(n-1)*fact(n-2);
    return sum;
}
int main()
{
    optimizar_io
    int n, upper, lower;
    long long f = 1, a[20];
    for (n = 1; f < 6227020800LL; n++)
    {
        f *= n;
        if (f < 10000) lower = n;
        a[n] = f;
    }
    upper = n;
    while (scanf("%d", &n) == 1)
    {
        if (n < 0)
        {
            if (n % 2 == 0)
                printf("Underflow!\n");
            else
                printf("Overflow!\n");
            continue;
        }
        else if (n >= upper)
            printf("Overflow!\n");
        else if (n <= lower)
            printf("Underflow!\n");
        else printf("%lld\n", a[n]);
    }
    return 0;
}
