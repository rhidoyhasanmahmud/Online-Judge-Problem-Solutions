#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,s,result;
    while(cin>>a>>b>>c)
    {
        if(a<=0 && b<=0 && c<=0)
            printf("The radius of the round table is: 0.000\n",result);
        else
        {
            s=0,result=0;
            s=(a+b+c)/2;
            result=sqrt(((s-a)*(s-b)*(s-c))/s);
            printf("The radius of the round table is: %.3lf\n",result);
        }
    }
    return 0;
}
