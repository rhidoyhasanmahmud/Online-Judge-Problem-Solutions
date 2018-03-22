#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        int sum=0;
        if(n==1)
            printf("%d\n",1);
        else
        {
            if(n%2==1)
            {
                sum = ((n*2)-(n/2))-1;
                printf("%d\n",sum);
            }
            else
            {
                sum = ((n*2)-(n/2));
                printf("%d\n",sum);
            }
        }
    }
    return 0;
}
