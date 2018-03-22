#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1;
    int a;
    cin>>n1;
    for(int i=1; i<=n1; i++)
    {
        cin>>a;

        if(a<=119 && a>=0)
            cout<<"Naughty Boy Sifat"<<endl;
        else
            cout<<"Good Boy Sifat"<<endl;
    }

    return 0;
}
