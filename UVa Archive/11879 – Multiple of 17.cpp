#include<bits/stdc++.h>
using namespace std;
char number[10000];
int main()
{
    int result,len;

    while(scanf("%s",number))
    {
        len = 0;
        len = strlen(number);
        if(len==1)
        {
            if(number[0]-'0'==0)
                break;
        }
        else
        {
            result=0;
            //len = strlen(number);
            for(int i=0; i<len; i++)
                result = (result*10+number[i]-'0')%17;
            if(result==0)
                printf("1\n");
            else
                printf("0\n");
        }
    }
    return 0;
}
