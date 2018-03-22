
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string num;
    int sum = 0;
    for(int i=1; i<=n; i++)
    {
        cin>>num;
        if(num[0]=='+')
            sum++;
        else if(num[0]=='-')
            sum--;
        else if(num[2]=='-')
            sum--;
        else
            sum++;
    }
    cout<<sum<<endl;
    return 0;
}
