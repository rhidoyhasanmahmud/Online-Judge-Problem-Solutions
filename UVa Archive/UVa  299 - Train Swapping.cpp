#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,t,ans;
    cin>>n;
    for(int x=1; x<=n; x++)
    {
        ans=0;
        int m,a[1000];
        cin>>m;
        for(int k=0; k<m; k++)
            cin>>a[k];
        for(i=1; i<m; i++)
            for(j=m-1; j>=i; j--)
                if(a[j-1]>a[j])
                {
                    t=a[j-1];
                    a[j-1] = a[j];
                    a[j] = t ;
                    ans+=1;
                }
        cout<<"Optimal train swapping takes "<<ans<<" swaps."<<endl;
        ans=0;
    }
    return 0;
}
