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
    long int maleBee[50]= {0},totalBee[50]= {0};
    totalBee[0] = 1;
    maleBee[0] = 0;
    for(int i=1; i<=44; i++)
    {
        maleBee[i] = totalBee[i-1];
        totalBee[i] = maleBee[i] + maleBee[i-1] + 1;
    }
    long int num;
    while(cin>>num)
    {
        if(num==-1)
            return 0;
        else
            printf("%ld %ld\n",maleBee[num],totalBee[num]);
    }
    return 0;
}
