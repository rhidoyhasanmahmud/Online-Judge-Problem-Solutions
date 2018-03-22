#include<bits/stdc++.h>
#define i long long

using namespace std;
int main()
{
    i n;
    while(true)
    {
        cin>>n;
        if(n==0)
            break;
        else if(n>=101)
            printf("f91(%lld) = %lld\n",n,n-10);
        else
            printf("f91(%lld) = %lld\n",n,91);
    }
    return 0;
}
