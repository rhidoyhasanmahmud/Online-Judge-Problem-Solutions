#include<bits/stdc++.h>
using namespace std;

int GCD(int a, int b)
{
    if(a%b==0) return b;
    return GCD(b,a%b);
}
int main()
{
    int N,i,j;
    while(scanf("%d",&N)==1)

        if(N==0)
            break;
        else
        {
            int G=0;
            for(i=1; i<N; i++)
                for(j=i+1; j<=N; j++)
                {
                    G+=GCD(i,j);
                }
            printf("%d\n",G);
            G=0;
        }
    return 0;
}
