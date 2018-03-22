#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c,arr[5000],arr1[5000],i;
    while(scanf("%d",&n)==1)
    {
        for(i=0; i<n; i++)
            scanf("%d",&arr[i]);
        for(i=0; i<n-1; i++)
            arr1[i]=abs(arr[i+1]-arr[i]);
        sort(arr1,arr1+i);
        for(i=1; i<n; i++)
        {
            if(arr1[i]==arr1[i-1])
            {
                c=0;
                break;
            }
        }
        if(c==0)
            printf("Not jolly\n");
        else
            printf("Jolly\n");
        c=1;
    }
    return 0;
}
