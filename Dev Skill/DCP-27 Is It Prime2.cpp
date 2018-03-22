#define ONLINE_JUDGE 1
#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)  return false;
    if (n <= 3)  return true;
    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n%2 == 0 || n%3 == 0) return false;

    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
            return false;

    return true;
}
// Driver Program to test above function
int main()
{
    long n;
    scanf("%ld",&n);
    for(int x = 1; x<=n; x++)
    {
        long num;
        scanf("%ld",&num);
        isPrime(num)?  cout << "Yes\n": cout << "No\n";
    }
    return 0;
}
