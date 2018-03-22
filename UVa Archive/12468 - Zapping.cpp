#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        int sum1=0,sum2=0;
        if(a==-1 && b==-1)
            break;
        //else if(a==b)
           // cout<<0<<endl;
        else if(a<=b)
        {
            sum1=b-a;
            sum2=a+(100-b);
            if(sum1>sum2)
                cout<<sum2<<endl;
            else
                cout<<sum1<<endl;
        }
        else if(a>b)
        {
            sum1=a-b;
            sum2=b+(100-a);
            if(sum1>sum2)
                cout<<sum2<<endl;
            else
                cout<<sum1<<endl;
        }
    }
    return 0;
}
