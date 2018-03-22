#include<bits/stdc++.h>
using namespace std;
int Table[10000005];
int Check()
{
    double last=0;
    for(int i = 1; i <= 10000000; i++)
    {
        last += log10(i);
        Table[i] = (int)last;
    }
}
int main()
{
    int n,num;
    cin>>n;
    Check();
    for(int i=1; i<=n; i++)
    {
        cin>>num;
        cout<<Table[num]+1<<endl;
    }
}
