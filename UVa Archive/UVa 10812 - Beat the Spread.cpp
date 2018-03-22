#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n;
    long long a,b;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a>>b;
        if(a%2==0 && b%2==0)
        {
            if(a==b)
                printf("%lld %lld\n",a,0);
            else if(a<b)
                printf("impossible\n");
            else if( a!= 0 && b==0)
                printf("%lld %lld\n",a-1,a-1);
            else
                printf("%lld %lld\n",a-(b/2),b-(b/2));
        }
        else
        {
            if(a==b)
                printf("%lld %lld\n",a,0);
            else if(a<b)
                printf("impossible\n");
            else if(a%2 ==1 && b==0)
                printf("impossible\n");
            else if(a%2==1 && b%2==0)
                printf("impossible\n");
        }
    }
    return 0;
}
