#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    long long int a,b,c,d;
    cin>>T;
    for(int i=1; i<=T; i++)
    {
        cin>>a>>b>>c>>d;
        if(a==b && b==c && c==d && d==a)
            cout<<"square"<<endl;
        else if((a==c && b==d) || (a==b && c==d) ||(a==d && b==c))
            cout<<"rectangle"<<endl;
        else if((a+b+c>d) && (b+c+d>a) && (c+d+a>b) && (a+b+d>c))
            cout<<"quadrangle"<<endl;
        else
            cout<<"banana"<<endl;
    }
    return 0;
}
