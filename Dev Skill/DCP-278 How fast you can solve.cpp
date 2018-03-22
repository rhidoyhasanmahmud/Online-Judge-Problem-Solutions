#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int a,b,c;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b>>c;
        cout<<abs(a-b-c)<<endl;
    }
    return 0;
}
