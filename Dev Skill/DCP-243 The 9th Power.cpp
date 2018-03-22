#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
using namespace std;
static int table[] =
{
    0, 0, 0, 0, 1, 1, 1, 1, 6, 2, 4, 8, 1, 3, 9, 7, 6, 4, 6, 4,
    5, 5, 5, 5, 6, 6, 6, 6, 1, 7, 9, 3, 6, 8, 4, 2, 1, 9, 1, 9
};

int unit_digit(int n, int a)
{
    return table[((n%10)<<2)+(a&3)];
}
int main()
{
    int n,a,b;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&a);
        cout<<unit_digit(9,a)<<endl;
    }
    return 0;
}
