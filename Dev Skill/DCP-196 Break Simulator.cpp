#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double a,b;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a>>b;
        double sum = (-a)/b;
        printf("%.2lf\n",sum);
    }
    return 0;
}
