#include<bits/stdc++.h>
using namespace std;

int countSquares(int a, int b)
{
    int cnt = 0;  // Initialize result

    // Traverse through all numbers
    for (int i=a; i<=b; i++)

        // Check if current number 'i' is perfect
        // square
        for (int j=1; j*j<=i; j++)
            if (j*j == i)
                cnt++;

    return cnt;
}

// Driver code
int main()
{
    int a, b ;
    while(scanf("%d%d",&a,&b) != EOF)
    {
        if(a == 0 && b==0)
            break;
        cout<<countSquares(a, b)<<endl;
    }
    return 0;
}
