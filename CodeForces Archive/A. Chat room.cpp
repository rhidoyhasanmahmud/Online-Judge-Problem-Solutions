#include<bits/stdc++.h>
using namespace std;
int main()
{
    string inp,tmp="ha";
    int a=0;
    cin>>inp;
    int len = inp.size();
    int cnt = 0;
    for(int i=0; i<len; i++)
    {
        if(inp[i]=='h' && tmp == "ha" )
        {
            tmp="h";
            a++;
            //cout<<a<<endl;
        }
        else if(inp[i]=='e' && tmp[a-1] == 'h' )
        {
            tmp+="e";
            a++;
        }
        else if(inp[i]=='l' && tmp[a-1] == 'e' )
        {
            tmp+="l";
            a++;
        }
        else if(inp[i]=='l' && tmp[a-1] == 'l' && tmp[a-2]=='e' )
        {
            tmp+="l";
            a++;
        }
        else if(inp[i]=='o' && tmp[a-1] == 'l' && tmp[a-2]=='l' )
        {
            tmp+="o";
            a++;
        }
    }
    //cout<<a<<endl;
    //cout<<tmp<<endl;
    if(a==5)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
