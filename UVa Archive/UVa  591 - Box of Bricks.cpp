#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,t,ans;
    while(cin>>n)
    {
        int a[n];
        ans=0;
        for(int k=0; k<n; k++)
            cin>>a[k];

        for(i=1; i<n; i++)
            for(j=n-1; j>=i; j--)
                if(a[j-1]>a[j])
                {
                    t=a[j-1];
                    a[j-1] = a[j];
                    a[j] = t ;
                    ans+=1;
                }
        cout<<ans<<endl;
    }
    return 0;
}
