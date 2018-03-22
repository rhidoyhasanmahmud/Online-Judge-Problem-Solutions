#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long sum;
    int n,m,a;
    cin>>a;
    for(int i=1; i<=a; i++)
    {
        cin>>n>>m;
        //cout<<(n+n)+(3*m)<<endl;
        sum=(n+n)+(3*m);
        printf("Case %d: %lld\n",i,sum);
//sum=0;
    }
    return 0;
}
