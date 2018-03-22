#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,n,numb;
    string a;
    cin>>T;
    for(int i=1; i<=T; i++)
    {
        long long int sum=0;
        cin>>n;
        cout<<"Case "<<i<<":"<<endl;
        for(int j=1; j<=n; j++)
        {
            cin>>a;
            if(a=="donate")
            {
                cin>>numb;
                sum+=numb;
            }
            if(a=="report")
                cout<<sum<<endl;
        }
    }
    return 0;
}
