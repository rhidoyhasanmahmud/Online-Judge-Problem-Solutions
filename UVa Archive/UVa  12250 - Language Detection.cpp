#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int i=1;
    while(cin>>a)
    {

        if(a=="#")
            break;
        else
        {
            if(a=="HELLO")
                printf("Case %d: ENGLISH\n",i++);
            else if(a=="HOLA")
                printf("Case %d: SPANISH\n",i++);
            else if(a=="HALLO")
                printf("Case %d: GERMAN\n",i++);
            else if(a=="BONJOUR")
                printf("Case %d: FRENCH\n",i++);
            else if(a=="CIAO")
                printf("Case %d: ITALIAN\n",i++);
            else if(a=="ZDRAVSTVUJTE")
                printf("Case %d: RUSSIAN\n",i++);
            else
                printf("Case %d: UNKNOWN\n",i++);
        }
    }
    return 0;
}
