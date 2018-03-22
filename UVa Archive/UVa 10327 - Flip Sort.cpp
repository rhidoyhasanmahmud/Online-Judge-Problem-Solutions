#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,t,ans;
    while(cin>>n)
    {
        ans=0;
        int a[n];
        for(int m=0; m<n; m++)
        {
            cin>>a[m];
        }
        for(i=1; i<n; i++)
            for(j=n-1; j>=i; j--)
                if(a[j-1]>a[j])
                {
                    t=a[j-1];
                    a[j-1] = a[j];
                    a[j] = t ;
                    ans+=1;
                }
        cout<<"Minimum exchange operations : "<<ans<<endl;
    }
}
