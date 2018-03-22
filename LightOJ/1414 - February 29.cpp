#include <bits/stdc++.h>
using namespace std;
map<string,int> mp;
char mon[20][25]={"January",
 "February", "March", "April",
  "May", "June", "July", "August",
   "September", "October", "November",
   "December"};
int main()
{

    for(int i=0;i<12;i++)
    mp[mon[i]]=i+1;
    int cas,T=1;
    cin >> cas;
    int cnt,m,t1,t2;char a[25];
    while(cas--)
    {
        scanf("%s%d,%d",a,&m,&cnt);
        t1=t2=0;
        if((cnt%400==0)||(cnt%100!=0&&cnt%4==0))
        {
            if(mp[a]>2)
            cnt++;
        }
        cnt--;
        t1+=(cnt/4-cnt/100+cnt/400);

        scanf("%s%d,%d",a,&m,&cnt);
        if((cnt%400==0)||(cnt%100!=0&&cnt%4==0))
        {
            if(mp[a]>2||(mp[a]==2&&m==29))
            cnt++;
        }
        cnt--;
        t2+=(cnt/4-cnt/100+cnt/400);
        printf("Case %d: %d\n",T++,t2-t1);
    }
    return 0;
}

