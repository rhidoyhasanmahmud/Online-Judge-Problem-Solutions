#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a>>b>>c;
        if( ( a*a + b*b == c*c) || (b*b + c*c == a*a) || (c*c + a*a == b*b))
            printf("Case %d: yes\n",i);
        else
            printf("Case %d: no\n",i);
    }
    return 0;
}
