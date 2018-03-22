#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int  a,b,c,d,L,result=0,calc=0;
    while(scanf("%ld%ld%ld%ld%ld",&a,&b,&c,&d,&L))
    {

        if(a==0 && b==0 && c==0 && d==0 && L==0)
            break;
        else
        {

            for(int i=0; i<=L; i++)
            {
                calc = (i*i*a) + (i*b) + c;
                if(calc % d==0)
                    result++;
            }
            cout<<result<<endl;
            result=0,calc=0;
        }
    }

    return 0;
}
