#include<bits/stdc++.h>
#define ll long long

using namespace std;
int main()
{
    ll n,a;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a;
        ll arr[a];

        for(int j=0; j<a; j++)
            cin>>arr[j];

        sort(arr,arr+a);
        printf("Case %d: %lld\n",i,arr[a-1]);
    }
    return 0;
}
