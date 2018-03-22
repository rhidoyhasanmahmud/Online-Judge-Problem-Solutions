#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b;
    while(scanf("%lf%lf",&a,&b) != EOF)
    {
        double sum = pow(b,1/a);
        printf("%.0lf\n",sum);
    }
    return 0;
}
