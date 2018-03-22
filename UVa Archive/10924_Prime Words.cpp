#include<bits/stdc++.h>
using namespace std;
void is_Prime(int n)
{
    int i;
    bool isPrime=true;
    {
        for(i = 2; i <= n / 2; ++i)
        {
            if(n % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }
    if (isPrime)
        cout << "It is a prime word."<<endl;
    else
        cout << "It is not a prime word."<<endl;
}
int main()
{
    char a[30];
    int m,sum;
    while(gets(a))
    {
        sum=0;
        int len=strlen(a);
        for(int i=0; i<len; i++)
        {
            if(a[i]>='a'&&a[i]<='z')
            {
                m=toascii(a[i])-96;
                sum=sum+m;
            }
            else
            {
                m=toascii(a[i])-38;
                sum=sum+m;
            }
        }
        is_Prime(sum);
        sum=0;
    }
    return 0;
}

