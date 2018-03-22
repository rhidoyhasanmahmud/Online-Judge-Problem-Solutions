#include <bits/stdc++.h>
using namespace std;
int amount,people,i;
int score[1005],counter;
double average,percent;
int main()
{
    scanf("%d",&amount);
    while(amount--)
    {
        scanf("%d",&people);
        average=0;
        for(i=0; i<people; i++)
        {
            scanf("%d",&score[i]);
            average+=score[i];
        }
        average/=people;
        counter=0;
        for(i=0; i<people; i++)
        {
            if(score[i] > average) ++counter;
        }
        percent=((double)counter/people)*100;
        printf("%.3lf%%\n",percent);
    }
    return 0;
}
