#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long   a;
    while(scanf("%lld",&a) != EOF)
    {
        long long int b =sqrt(a);
        if(a==0)
            break;
        else if(a==b*b)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}
