#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,n;
    scanf("%d",&T);
    for(int i=1; i<=T; i++)
    {
        scanf("%d",&n);
        if(n<10)
            printf("%d %d\n",n,0);
        else
            printf("%d %d\n",10,n-10);
    }
    return 0;
}
