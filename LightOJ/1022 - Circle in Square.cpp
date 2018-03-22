#include<bits/stdc++.h>
using namespace std;
#define pi  (2 * acos (0.0))
int main()
{
    double num;
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%lf",&num);
        double calc = ((2*num)*(2*num))-(pi*(num*num));
        printf("Case %d: %.2lf\n",i,calc);
    }
    return 0;
}
