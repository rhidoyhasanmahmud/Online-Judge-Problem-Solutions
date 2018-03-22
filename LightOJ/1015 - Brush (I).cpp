#include<bits/stdc++.h>
using namespace std;
int arr[1005];
int main()
{
    int T,N;
    cin>>T;
    for(int i=1; i<=T; i++)
    {
        long long int sum=0;
        // cout<<endl;
        cin>>N;
        for(int j=0; j<N; j++)
        {
            cin>>arr[j];
            if(arr[j]>=0)
                sum+=arr[j];
        }
        cout<<"Case "<<i<<": "<<sum<<endl;
    }
    return 0;
}
