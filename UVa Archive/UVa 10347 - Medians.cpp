#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c;
    while(scanf("%lf%lf%lf",&a,&b,&c)!=EOF)
    {
        double s=0,result=0;
        s=(a+b+c)/2;
        result=4.000/3.000*sqrt(s*(s-a)*(s-b)*(s-c));
        if(result>0)
            printf("%.3lf\n",result);
        else
            printf("%.3lf\n",-1.000);
    }
    return 0;
}
