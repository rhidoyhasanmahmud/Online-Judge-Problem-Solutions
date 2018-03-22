#include<bits/stdc++.h>
using namespace std;
int arr[105][105];
int main()
{
    int n,a=0,c=0,b=0;
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
    for(int i=0; i<n; i++)
    {
        a+=arr[i][0];
        b+=arr[i][1];
        c+=arr[i][2];
    }
    if(a==0 && b==0 && c==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
