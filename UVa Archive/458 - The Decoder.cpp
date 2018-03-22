#include<bits/stdc++.h>
using namespace std;
int main()
{
    string inp;
    while(cin>>inp)
    {
        int len = inp.size();
        for(int i=0; i<len; i++)
        {
            char temp = inp[i]-7;
            cout<<temp;
        }
        cout<<endl;
    }
    return 0;
}
