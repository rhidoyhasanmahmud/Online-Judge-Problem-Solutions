#include<bits/stdc++.h>
using namespace std;
long long int Go(long long int x)
{
    long long int m=0;
    while(x > 0)
    {
        m*= 10;
        m += x%10;
        x/= 10;
    }
    return m;
}
int main()
{
    int N;
    cin >> N;
    for (int i=0; i<N; i++)
    {
        long long int n, tmp=0;
        cin >> n;
        while(Go(n) != n)
        {
            tmp++;
            n += Go(n);
        }
        cout << tmp << " " << n << endl;
    }
    return 0;
}
