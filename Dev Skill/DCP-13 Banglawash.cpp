#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1;
    int a,b,c,d,e,f,g,h;
    int m,n,x,y,i;
    cin>>n1;
    for(int i=1; i<=n1; i++)
    {
        int k=0;
        cin>>a>>b>>c>>d;
        cin>>e>>f>>g>>h;
        m=a+b;
        n=c+d;
        x=e+f;
        y=g+h;
        if(m>n && x>y)
            cout<<"Banglawash"<<endl;
        else
            cout<<"Miss"<<endl;
    }

    return 0;
}
