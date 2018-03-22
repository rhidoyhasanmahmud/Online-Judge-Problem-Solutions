/*
*******************************************************************************
**                  ===================================                      **
**                  =  Name       :  Hasan Mahmud
**                  =  Institute  :  UAP,CSE
**                  =  Email      :  hasan404cse@gmail.com
**                  ===================================                      **
*******************************************************************************
*/
#include<bits/stdc++.h>
using namespace std;
#define FastRead	ios_base::sync_with_stdio(0);cin.tie(0);
int main()
{
    int zerro_cnt;
    FastRead
    string inp;
    cin>>inp;
    int len = inp.length();
    if(len<7)
        cout<<"no"<<endl;
    else
    {
        for(int i=0; i<len; i++)
        {
            zerro_cnt = 0;
            if(inp[i]=='1')
            {
                for(int j=i; j<len; j++)
                {
                    if(inp[j]=='0')
                        zerro_cnt++;
                }
                if(zerro_cnt>=6)
                    break;
            }
            //cout<<zerro_cnt<<endl;
        }
        if(zerro_cnt>=6)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}

