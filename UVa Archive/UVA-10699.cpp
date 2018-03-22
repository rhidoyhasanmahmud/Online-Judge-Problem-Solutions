// Program to print all prime factors
#include<bits/stdc++.h>
using namespace std;

// A function to print all prime factors of a given number n
int  primeFactors(int n)
{
    // Print the number of 2s that divide n
    // while (n%2 == 0)
    // {
    //     n = n/2;
    //    printf("%d ", 2);
    //  }
    int count=0;
    // n must be odd at this point.  So we can skip one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        // While i divides n, print i and divide n
        while (n%i == 0)
        {
            //printf("%d ", i);
            count++;
            n = n/i;
        }
    }

    // This condition is to handle the case whien n is a prime number
    // greater than 2
    if (n > 2 )
    {
        //printf ("%d ", n);
        count++;
        if(n%2 == 0)
            //printf("%d ", 2);
            count++;
    }
    return count;
}

/* Driver program to test above function */
int main()
{
    int n ;
    while(cin>>n)
    {
        int sum=primeFactors(n);
        cout<<sum<<endl;
        sum=0;
    }
    return 0;
}
