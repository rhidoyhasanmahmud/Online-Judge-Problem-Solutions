#include<bits/stdc++.h>
#define INF 1000111222
using namespace std;
int main()
{
    int T,n;
    cin>>T;
    for(int k=1; k<=T; k++)
    {
        int res=INF;
        cin>>n;
        for(int i=1; i*i<=n; i++)
            if(n%i==0)
                for(int j=1; j*j<=n/i; j++)
                    if(((n/i)%j)==0)
                        res = min(res,2*(i*j+n/i+n/j));
        cout<<res<<endl;
    }
    return 0;
}
