#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c;
    int m;
    int T;
    //scanf("%d",&T);
    cin>>T;
    for(int i=1; i<=T; i++)
    {
        //scanf("%s%s%s",a,b,c);
        cin>>a>>b>>c;
        // scanf("%lld",&m);
        cin>>m;
        if(b=="nobo")
        {
            printf("Shuva naya barsha %d\n",m+650);
        }
        else if(b=="naya")
        {
            printf("Shuvo nobo borsho %d\n",m-650);
        }
    }
    return 0;
}
