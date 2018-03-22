#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string word;
    for(int i=1;i<=n;i++)
    {
        cin>>word;
        int len = word.size();
        if(len<=10)
            cout<<word<<endl;
        else
            cout<<word[0]<<len-2<<word[len-1]<<endl;
    }
    return 0;
}
