#include<bits/stdc++.h>
#define PI acos(-1.0)
using namespace std;
int main()
{
    int t,T=1;
    double r1,r2,r3;
    scanf("%d",&t);
    while(t--)
    {
        double tmp,a,b,c,A,B,C,SA,CA,CB,CC;
        double S,s1,s2,s3,s;
        scanf("%lf%lf%lf",&r1,&r2,&r3);
        a=r1+r2;
        b=r1+r3;
        c=r2+r3;
        CA=(b*b+c*c-a*a)/(2*b*c);
        CB=(a*a+c*c-b*b)/(2*a*c);
        CC=(a*a+b*b-c*c)/(2*a*b);
        A=acos(CA);
        B=acos(CB);
        C=acos(CC);
        S=0.5*sin(B)*a*c;
        s1=0.5*A*r3*r3;
        s2=0.5*B*r2*r2;
        s3=0.5*C*r1*r1;
        s=S-s1-s2-s3;
        printf("Case %d: %.10lf\n",T++,s);
    }
    return 0;
}
