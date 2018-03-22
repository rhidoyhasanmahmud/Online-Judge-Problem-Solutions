#include<bits/stdc++.h>
using namespace std;
long long moja(long long n)
{

    if(n==1)
        return 1;
    else if(n&1)
        return moja(3*n+1)+1;
    else
        return moja(n/2)+1;
}
long long low(long long a,long long b)
{
    long long max=0,c;
    if(a<b)
    {
        while(a<=b)
        {
            c=moja(a);
            if(max<c)
                max = c;
            a++;
        }
        return max;
    }
    else
    {
        while(b<=a)
        {
            c=moja(b);
            if(max<c)
                max = c;
            b++;
        }
        return max;
    }
}
int main()
{
    long long  n,m;
    while(cin>>n>>m)
    {
        // cout<<moja(m);
        cout<<n<<" "<<m<<" ";
        cout<<low(n,m);
        cout<<endl;
    }
    return 0;
}
