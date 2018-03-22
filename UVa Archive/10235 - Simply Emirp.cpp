#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n%2 == 0 || n%3 == 0)
        return false;
    for (int i=5; i*i<=n; i=i+6)
    {
        if (n%i == 0 || n%(i+2) == 0)
            return false;
    }
    return true;
}
int ReversE(int   n)
{
    int tmp,rev=0,reverse_number;
    while(n>0)
    {
        rev=10*rev+(n%10);
        n=n/10;
    }
    reverse_number=rev;
    return reverse_number;
}
int main()
{
    int n;
    while(cin>>n)
    {
        if(isPrime(n))
        {
            if(isPrime(ReversE(n)))
            {
                if(ReversE(n)==n)
                    cout<<n<<" is prime."<<endl;
                else
                    cout<<n<<" is emirp."<<endl;
            }
            else
                cout<<n<<" is prime."<<endl;
        }
        else
            cout<<n<<" is not prime."<<endl;
    }
    return 0;
}
