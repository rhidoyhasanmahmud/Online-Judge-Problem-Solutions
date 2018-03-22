#include<bits/stdc++.h>
using namespace std;
#define cover(a,d) memset(a,d,sizeof(a))
bool prime[20000010];
int tprime[20000010];
void sieve()
{
    prime[1]=false;
    int n=sqrt(20000010);
    for(int i=3; i<=n; i++)
    {
        if(prime[i]!=false)
        {
            for(int j=2*i; j<=20000010; j=j+i)
            {
                prime[j]=false;
            }
        }
    }
}
void twin_prime()
{
    int j=1;
    for(int i = 3; i<=20000000; i++)
    {
        if(prime[i] && prime[i+2])
        {
            tprime[j++] = i;
        }
    }
}

int main ()
{
    cover(prime,true);
    sieve();
    twin_prime();
    int n;
    while(scanf("%d",&n)==1)
    {
        printf("(%d, %d)\n",tprime[n],tprime[n]+2);
    }
    return 0;
}
