#include<bits/stdc++.h>
using namespace std;
char a[115];
int main()
{
    int n,j=0;
    cin>>n;
    getchar();
    while(n--)
    {
        gets(a);
        int length = strlen(a);
        int sum=0;
        for(int i=0; i<length; i++)
        {
            if(a[i]=='a' || a[i]=='d' || a[i]=='g' || a[i]=='j' || a[i]=='m' || a[i]=='p' || a[i]=='t' || a[i]=='w')
                sum+=1;
            else if(a[i]=='b' || a[i]=='e' || a[i]=='h' || a[i]=='k' || a[i]=='n' || a[i]=='q' || a[i]=='u' || a[i]=='x')
                sum+=2;
            else if(a[i]=='c' || a[i]=='f' || a[i]=='i' || a[i]=='l' || a[i]=='o' || a[i]=='r' || a[i]=='v' || a[i]=='y')
                sum+=3;
            else if(a[i]=='s' || a[i]=='z')
                sum+=4;
            else
                sum+=1;
        }
        j++;
        printf("Case #%d: %d\n",j,sum);
    }
    return 0;

}
