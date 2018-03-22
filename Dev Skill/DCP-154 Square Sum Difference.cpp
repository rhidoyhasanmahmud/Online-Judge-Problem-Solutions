#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int n,m;
    cin>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>n;
        unsigned long long int  sum1=(n*(n+1)*(2*n+1))/6;
        unsigned long long int sum2 = ((n*(n+1))/2)*((n*(n+1))/2);
        cout<<sum2-sum1<<endl;
    }
}
