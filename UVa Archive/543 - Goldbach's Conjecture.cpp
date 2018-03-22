#include<bits/stdc++.h>
using namespace std;
bool isPrime(int x)
{
    if(x==1)
        return false;
    if(x==2)
        return true;
    if(x%2 == 0)
        return false;
    for(int i = 3; i <= sqrt(x); i+=2)
    {
        if(x%i == 0)
            return false;
    }
    return true;
}
int main()
{
    int n;
    while(scanf("%d",&n))
    {
        if(n==0)
            break;
        else
        {
            for(int i=3; i<n; i++)
            {
                if(isPrime(i))
                {
                    if(isPrime(n-i))
                    {
                        printf("%d = %d + %d\n",n,i,(n-i));
                        break;
                    }
                }
            }
        }
    }
    return 0;
}
