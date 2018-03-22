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
using namespace std;
int main()
{
    int T,num;
    cin>>T;
    for(int i=1; i<=T; i++)
    {
        cin>>num;
        bool chk(false);
        int j;
        printf("Case #%d: %d = ",i,num);
        for( j=2; j<num; j++)
        {
            if(num%j==0)
            {
                if(!chk)
                {
                    cout << j << " * " << num / j << " = ";
                    chk   = true;
                }
                else
                    break;
            }
        }
        cout << j << " * " << num / j<<endl;
    }
    return 0;
}
