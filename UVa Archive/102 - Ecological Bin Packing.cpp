#include<bits/stdc++.h>
using namespace std;
int main()
{
    long B[3], G[3], C[3];
    long n, min, sum;
    string possib[] = { "BGC", "BCG", "GBC", "GCB", "CBG", "CGB" };
    while(scanf("%ld %ld %ld %ld %ld %ld %ld %ld %ld\n", &B[0], &G[0], &C[0], &B[1], &G[1], &C[1], &B[2], &G[2], &C[2]) == 9)
    {
        int comb[] = { 0, 1, 2 };
        min = LONG_MAX;
        string guess = "BGC";
        n = 0;
        do
        {
            sum = B[0] + B[1] + B[2] + G[0] + G[1] + G[2] + C[0] + C[1] + C[2];
            for(int i = 0; i < 3; i++)
            {
                switch(comb[i])
                {
                case 0:
                    sum -= B[i];
                    break;
                case 1:
                    sum -= G[i];
                    break;
                case 2:
                    sum -= C[i];
                    break;
                }
            }
            if(min > sum || (min == sum && possib[n] < guess))
            {
                min = sum;
                guess = possib[n];
            }
            n++;
        }
        while(next_permutation(comb, comb + 3));
        cout << guess << " " << min << endl;
    }
    return 0;
}
