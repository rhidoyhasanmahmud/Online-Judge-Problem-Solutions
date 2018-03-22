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
int isperfect(long n)
{
    int i=1,sum=0;
    while(i<n)
    {
        if(n%i==0)
            sum=sum+i;
        i++;
    }
    return sum;
}
int main()
{
    int num;
    cout<<"PERFECTION OUTPUT"<<endl;
    while(cin>>num)
    {
        int sum=0;
        if(num==0)
        {
            cout<<"END OF OUTPUT"<<endl;
            break;
        }
        else
        {
            printf("%5d  ", num);
            sum = isperfect(num);
            if(sum==num)
                cout<<"PERFECT"<<endl;
            else if(sum>num)
                cout<<"ABUNDANT"<<endl;
            else if(sum<num)
                cout<<"DEFICIENT"<<endl;
        }
    }
    return 0;
}
