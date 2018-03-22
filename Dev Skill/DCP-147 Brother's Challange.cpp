#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
using namespace std;
void divisible (int n)
{
    long long int  x = 0;
    for (int i = 0; i < n; i++)
    {

        if((i%3)==0 || (i%5)==0)
        {
            x+=i;
        }
    }
    cout<<x<<endl;
}
int main()
{
    int n;
    cin>>n;
    divisible(n);
    return 0;
}
