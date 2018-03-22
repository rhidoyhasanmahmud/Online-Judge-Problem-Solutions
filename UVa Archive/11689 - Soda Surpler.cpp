#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,sum,temp,n,calc;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a>>b>>c;
        sum = a+b;
        temp=0,calc=0;
        while(sum>=c)
        {
            temp = sum/c;
            calc+=temp;
            sum = temp+(sum%c);
        }
        cout<<calc<<endl;
    }
    return 0;
}
