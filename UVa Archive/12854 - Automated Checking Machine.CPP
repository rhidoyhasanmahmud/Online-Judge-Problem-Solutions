#include<bits/stdc++.h>
using namespace std;
int a[6];
int b[6];
int c;
int main()
{
    while(scanf("%d",&a[0])==1)
    {
        c=0;
        for(int i=1; i<5; i++)
            cin>>a[i];
        for(int j=0; j<5; j++)
            cin>>b[j];
        for(int k=0; k<5; k++)
        {
            if((a[k]==0 && b[k]==1) || (a[k]==1 && b[k]==0))
                c++;
        }
        if(c==5)
            cout<<"Y"<<endl;
        else
            cout<<"N"<<endl;
    }
    return 0;
}
