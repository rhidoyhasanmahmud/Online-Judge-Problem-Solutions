#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n,k,s=0,e=0;
    cin>>n>>k;
    map < int, int > mp;
    for(int i=1; i<=k; i++)mp[i]=0;
    vector < int > v;
    for(int i=0; i<n; i++)
    {
        int a;
        scanf("%d",&a);
        if(mp.find(a)!=mp.end())
        {
            mp[a]++;
            e++;
        }
        //else {v.push_back(a);s++;}
    }
    int a=n/k;
    int ans=0;
    for(map < int,int > ::iterator it=mp.begin(); it!=mp.end(); it++)
    {
        int b=it->first;
        while(it->second!=a)
        {
            if(it->second > a)
            {
                it->second--;
            }
            else if(it->second < a )
            {
                it->second++;
            }
            ans++;
        }
    }
    cout<<ans/2<<endl;
    return 0;
}
