#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n,i;
    while(scanf("%ld",&n) == 1)
    {
        long int arr[n];
        if(n==0)
            break;

        else
        {
            for( i=0; i<n; i++)
                scanf("%ld",&arr[i]);

            sort(arr,arr+n);

            for(i=0; i<n-1; i++)
            {
                printf("%ld ",arr[i]);
            }
            printf("%ld\n",arr[n-1]);

        }
    }
    return 0;
}


