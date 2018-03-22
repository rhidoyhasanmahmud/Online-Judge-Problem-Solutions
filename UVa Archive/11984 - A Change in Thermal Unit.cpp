#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,sum;
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        sum=0;
        cin>>a>>b;
        sum = (9*a/5+b);
        double sum1 = 5*sum/9;
        printf("Case %d: %.2lf\n",i,sum1);
    }
    return 0;
}
