#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
using namespace std;
float power(float x, int y)
{
    float temp;
    if( y == 0)
        return 1;
    temp = power(x, y/2);
    if (y%2 == 0)
        return temp*temp;
    else
    {
        if(y > 0)
            return x*temp*temp;
        else
            return (temp*temp)/x;
    }
}
int main( )
{
    int T;
    scanf("%d",&T);
    for(int m=1; m<=T; m++)
    {
        float a=2;
        int b;
        scanf("%d",&b);
        if(b%2==0)
        {
            double sum = (double)(power(a,b));
            char charray[200];
            sprintf(charray, "%2.13f", sum);
            printf("+");
            printf("%c\n",charray[0]);
        }
        else
        {
            double sum = (double)(power(a,b));
            char charray[200];
            sprintf(charray, "%2.13f", sum);
            printf("-");
            printf("%c\n",charray[0]);
        }
    }
    return 0;
}
