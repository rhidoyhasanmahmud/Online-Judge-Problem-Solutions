#include<bits/stdc++.h>
using namespace std;
char bhajjo[1000000];
long long MOD (char bhajjo[],long long bhajok )
{
    long long i,bhagshesh=0;
    long long ln = strlen(bhajjo);
    for(i=0; i<ln; i++)
    {
        bhagshesh = ((bhagshesh*10) + (bhajjo[i]-'0') )%bhajok; // Amra character theke integer e convert kore nilam '0' biyog kore
    }
    return bhagshesh;
}
int main()
{
    int nl = 0,cnt,a,b,c,d,e,cnt1;
    while(cin>>bhajjo)
    {
        cnt=1,cnt1=0;
        if ( nl != 0 )
            printf("\n");
        nl = 1;
        a = MOD(bhajjo,4);
        b = MOD(bhajjo,400);
        c = MOD(bhajjo,100);
        d = MOD(bhajjo,15);
        e = MOD(bhajjo,55);
        if((a==0 && c != 0 ) || b==0)
        {
            printf("This is leap year.\n");
            cnt=0;
            if(d==0)
            {
                cnt=0;
                cnt1=1;
                printf("This is huluculu festival year.\n");
            }
            if(e==0)
            {
                cnt=0;
                printf("This is bulukulu festival year.\n");
            }
        }
        if(d==0 && cnt1==0)
        {
            cnt=0;
            printf("This is huluculu festival year.\n");
        }
        if (cnt==1)
            printf("This is an ordinary year.\n");
    }
    return 0;
}
