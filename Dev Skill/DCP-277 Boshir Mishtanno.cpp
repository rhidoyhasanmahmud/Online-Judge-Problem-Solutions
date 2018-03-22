#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int T,sum=0,r,c;
    cin>>T;
    for(int i=0; i<T; i++)
    {
        cin>>r>>c;
        while(1)
        {
            sum+=(r*c);
            r--;
            c--;
            if(r*c==0)
                break;
        }
        cout<<"Case "<<i+1<<": "<<sum*15<<endl;
        //cout<<sum*15<<endl;
        sum=0;
    }
    return 0;
}
