#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    int a,b;
    for(int i=1; i<=T; i++)
    {
        cin>>a>>b;
        int s,d;
        if(a>=b && (a-b)%2==0)
        {
            int sum = (a-b)/2;
            int s = sum+b;
                    printf("%d %d\n",s,sum);
        }
        else
            printf("impossible\n");
    }
    return 0;
}
