#include<bits/stdc++.h>
#define N 10000000
int Table[N];
using namespace std;

void SieveOfEratosthenes()
{
    int i=2;
    for(; i<=N; ++i)
        Table[i]=1;

    Table[0] = Table[1] = 0;

    int len = sqrt(N);

    for( i=2; i<=len; i++)
    {
        if(Table[i])
        {
            for(int k = i*i; k<=N; k+=i)
                Table[k]=0;
        }
    }
    Table[2]=0;
}
int main()
{
    int num,cnt=0;
    SieveOfEratosthenes();
    while(cin>>num)
    {
        if(num%2==0)
        {
            cnt=1;
            if(num==0)
                break;
            else
            {
                for(int a=2; a<=num; a++)
                {
                    if(Table[a]==1)
                    {
                        if(num%a==0)
                            cnt++;
                    }
                }
                cout<<num<<" : "<<cnt<<endl;
            }
        }
        else
        {
            cnt=0;
            if(num==0)
                break;
            else
            {
                for(int a=2; a<=num; a++)
                {
                    if(Table[a]==1)
                    {
                        if(num%a==0)
                            cnt++;
                    }
                }
                cout<<num<<" : "<<cnt<<endl;
            }
        }
    }
    return 0;
}
