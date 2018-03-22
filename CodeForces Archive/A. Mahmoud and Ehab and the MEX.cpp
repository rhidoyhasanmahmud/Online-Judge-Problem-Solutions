#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n,tmp;
    cin>>a>>b;
    int k=b;
    while(a--)
    {
        cin>>tmp;
        if(tmp<b)
            k--;
        if(tmp==b)
            k++;
    }
    cout<<k<<endl;
    return 0;
}
