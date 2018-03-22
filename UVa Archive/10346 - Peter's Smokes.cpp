#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,cnt,res;
    while(cin>>a>>b)
    {
        cnt=0,res=0;

        while(a>0)
        {
            cnt+=a;
            res+=a;
            a=res/b;
            res%=b;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
