#include<bits/stdc++.h>
using namespace std;
char c[100000];
int  flag = 0;
int main()
{
    while(gets(c))
    {
        int  length = strlen(c);

        for(int i=0; i<length; i++)
        {
            if(c[i]=='"' && flag==0)
            {
                cout<<"``";
                flag=1;
            }
            else if(c[i]=='"' && flag==1)
            {
                cout<<"''";
                flag=0;
            }
            else
                cout<<c[i];
        }
        cout<<endl;
    }
    return 0;
}
