#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)
using namespace std;
int main()
{
    ll t;
    string s;
    cin>>t;
    getchar();
    while(t--)
    {
        stack<char>inp;
        getline(cin,s);
        if(s.compare("n")==0)
        {
            printf("Yes\n");
            continue;
        }
        if(s.size()==1||s.size()%2!=0)
        {
            pf("No\n");
            continue;
        }
        ll tmp1=0,i;
        for(i=0; i<s.size(); i++)
        {
            if(s[i]=='('||s[i]=='[')
                inp.push(s[i]);
            else if(s[i]==')' && !inp.empty() && inp.top()=='(')
                inp.pop();
            else if(s[i]==']' && !inp.empty() && inp.top()=='[')
                inp.pop();
            else
                tmp1=1;
        }
        if(inp.empty() && tmp1==0)
            pf("Yes\n");
        else
            pf("No\n");
    }
    return 0;
}
