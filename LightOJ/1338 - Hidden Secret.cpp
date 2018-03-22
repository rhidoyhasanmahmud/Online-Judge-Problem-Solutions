#include<bits/stdc++.h>
using namespace std;
char arr1[105],arr2[105],temp1[105],temp2[105];
int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    for(int T=1; T<=n; T++)
    {
        for(int j=0; j<101; j++)
        {
            arr1[j] = 0;
            arr2[j] = 0;
            temp1[j] = 0;
            temp2[j] = 0;
        }
        int j=0;
        gets(arr1);
        int len = strlen(arr1);
        for(int i=0; i<len; i++)
        {
            if(arr1[i]>='a' && arr1[i]<='z')
            {
                temp1[j] = arr1[i];
                j++;
            }
            else if(arr1[i]>='A' && arr1[i]<='Z')
            {
                temp1[j] = arr1[i]+32;
                j++;
            }
        }
        temp1[j] = ' ';
        int k=0;
        gets(arr2);
        int len1 = strlen(arr2);
        for(int i=0; i<len1; i++)
        {
            if(arr2[i]>='a' && arr2[i]<='z')
            {
                temp2[k] = arr2[i];
                k++;
            }
            else if(arr2[i]>='A' && arr2[i]<='Z')
            {
                temp2[k] = arr2[i]+32;
                k++;
            }
        }
        temp2[k] = ' ';
        sort(temp1,temp1+j);
        sort(temp2,temp2+k);
        if(strcmp(temp1,temp2)==0)
            printf("Case %d: Yes\n",T);
        else
            printf("Case %d: No\n",T);
    }
    return 0;
}
