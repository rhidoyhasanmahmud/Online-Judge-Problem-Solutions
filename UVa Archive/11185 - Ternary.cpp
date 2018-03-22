//   Base Conversion
#include <cstdio>
int main()
{
    long long int a,b, i, j, l, num;
    int ter[100];
    for(a=1; a<=100; a++)
    {
        scanf("%lld", &num);
        if(num<0) break;
        for(i=0, l=1; i<100 ; i++)
        {
            ter[i]=num%3;
            num=((num-ter[i])/3);
            if(num==0) break;
            else l++;
        }
        for(j=l-1; j>=0; j--)
        {
            printf("%d", ter[j]);
        }
        printf("\n");
    }
    return 0;
}
