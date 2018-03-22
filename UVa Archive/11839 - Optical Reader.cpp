#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    while(cin>>N)
    {
        if(N==0)
            break;
        for(int i=0; i<N; i++)
        {
            int cnt=0,temp=0,arr;
            for(int j=0; j<5; j++)
            {
                cin>>arr;
                if(arr<=127)
                {
                    cnt++;
                    temp = j+1;
                }
            }
            //cout<<cnt<<endl;
            //cout<<temp<<endl;
            if(cnt==1)
            {
                if(temp==1)
                    cout<<"A"<<endl;
                else if(temp==2)
                    cout<<"B"<<endl;
                else if(temp==3)
                    cout<<"C"<<endl;
                else if(temp==4)
                    cout<<"D"<<endl;
                else if(temp==5)
                    cout<<"E"<<endl;
            }
            else
                cout<<"*"<<endl;
        }
    }
    return 0;
}
