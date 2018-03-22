#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,i,m,a;
    i=1;
    while(cin>>x>>y)
    {
        m=x;
        if(m<0)
            break;
        for(a=1;(m<=y && m>1);a++)
        {
            if(m%2==0)
                m=m/2;
            else
                m=3*m+1;
        }
        if(m!=1)
            a--;
        printf("Case %d: A = %d, limit = %d, number of terms = %d\n",i,x,y,a);
        i++;
    }
    return 0;
}
