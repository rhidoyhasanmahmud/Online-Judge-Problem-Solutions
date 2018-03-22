/*
*******************************************************************************
**                  ===================================                      **
**                  =  Name       :  Hasan Mahmud
**                  =  Institute  :  UAP
**                  =  Dept       :  CSE
**                  =  Email      :  hasan404cse@gmail.com
**                  ===================================                      **
*******************************************************************************
*/
#include<bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
#define s scanf
#define p printf
typedef long long int ll;
using namespace std;
char number[1005];
int main()
{
    int result,len;
    optimizar_io;
    while(cin>>number)
    {
        len = 0;
        len = strlen(number);
        if(number[0]=='0' && len==1)
        {
            break;
        }
        else
        {
            result=0;
            for(int i=0; i<len; i++)
                result = (result*10+number[i]-'0')%11;
            if(result==0)
                cout<<number<<" is a multiple of 11."<<endl;
            else
                cout<<number<<" is not a multiple of 11."<<endl;
        }
    }
    return 0;
}
