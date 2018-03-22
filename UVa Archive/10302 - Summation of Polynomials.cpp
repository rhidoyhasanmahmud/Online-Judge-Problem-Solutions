#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n;
    while(scanf("%ld",&n)==1)
    {
        printf("%ld\n",((n*n*n*n+2*n*n*n+n*n)/4));
    }
    return 0;
}
