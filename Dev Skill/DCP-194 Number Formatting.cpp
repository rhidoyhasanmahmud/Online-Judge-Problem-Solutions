#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char num[15];
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>num;
        int len = 0;
        len = sizeof(num);
        //cout<<len;
        if(num[0]=='8' && num[1]=='8')
        {
            if( num[4]=='1')
                cout<<num<<" "<<"Citycell"<<endl;
            else if( num[4]=='5')
                cout<<num<<" "<<"Teletalk"<<endl;
            else if( num[4]=='6')
                cout<<num<<" "<<"Airtel"<<endl;
            else if(num[4]=='7')
                cout<<num<<" "<<"Grameenphone"<<endl;
            else if( num[4]=='8')
                cout<<num<<" "<<"Robi"<<endl;
            else if( num[4]=='9')
                cout<<num<<" "<<"Banglalink"<<endl;
        }
        else
        {
            if( num[2]=='1')
                cout<<"88"<<num<<" "<<"Citycell"<<endl;
            else if( num[2]=='5')
                cout<<"88"<<num<<" "<<"Teletalk"<<endl;
            else if( num[2]=='6')
                cout<<"88"<<num<<" "<<"Airtel"<<endl;
            else if(num[2]=='7')
                cout<<"88"<<num<<" "<<"Grameenphone"<<endl;
            else if( num[2]=='8')
                cout<<"88"<<num<<" "<<"Robi"<<endl;
            else if( num[2]=='9')
                cout<<"88"<<num<<" "<<"Banglalink"<<endl;
        }
    }
    return 0;
}
