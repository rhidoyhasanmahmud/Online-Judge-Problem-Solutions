#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        cin>>a>>b>>c;

        if(a+b>c && b+c>a && c+a>b)
            printf("OK\n");
        else
            printf("Wrong!!\n");
    }
    return 0;
}
