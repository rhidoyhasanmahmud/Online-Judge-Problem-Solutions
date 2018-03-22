#include<bits/stdc++.h>
using namespace std;
int main()
{
    double T,a,b,c;
    int i=1;
    while(cin>>T)
    {
        if(T>0)
        {
            cin>>a>>b>>c;
            if(T==1)
            {
                double result = ((a+b)/2)*c;
                double result1 = (b-a)/c;
                printf("Case %d: %.3lf %.3lf\n",i++,result,result1);
            }
            else if(T==2)
            {
                double result1 = (b-a)/c;
                double result = ((a+b)/2)*result1;
                printf("Case %d: %.3lf %.3lf\n",i++,result,result1);
            }
            else if(T==3)
            {
                double result = sqrt(a*a+2*b*c);
                double result1 = ((2*c)/(result+a));
                printf("Case %d: %.3lf %.3lf\n",i++,result,result1);
            }
            else if(T==4)
            {
                double result = sqrt(a*a-2*b*c);
                double result1 = ((2*c)/(result+a));
                printf("Case %d: %.3lf %.3lf\n",i++,result,result1);
            }
        }
        else
            break;
    }
    return 0;
}
