#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a = "that I love ";
    string b = "that I hate ";
    int n,o=0;
    cin>>n;
    cout<<"I hate";
    for(int i=1; i<=(n-1); i++)
    {
        if(o==0)
        {
            cout<<" "<<a;
            o=1;

        }
        else if(o==1)
        {
            cout<<" "<<b;
            o=0;
        }
    }
    cout<<" "<<"it"<<endl;
    return 0;
}

