#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        int sum=0;
        cin>>m;
        int array[m];

        for(int j=0; j<m; j++)
            cin>>array[j];
        sort(array,array+m);

        if(m%2==1)
        {
            sum=m/2;
        }
        else
        {
            sum=m/2;
        }

        printf("Case %d: %d\n",i,array[sum]);
        sum=0;
    }
    return 0;
}
