#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  n,i;
    long long a,b,c;
    cin>>n;
    for( i=1; i<=n; i++)
    {
        cin>>a>>b>>c;
        if(a+b>c && b+c>a && c+a>b)
        {
            if(a==b && b==c && c==a)
                printf("Case %lld: Equilateral\n",i);
            else if(a==b || b==c || c==a)
                printf("Case %lld: Isosceles\n",i);
            else
                printf("Case %lld: Scalene\n",i);
        }
        else
            printf("Case %lld: Invalid\n",i);
    }
    return 0;
}
