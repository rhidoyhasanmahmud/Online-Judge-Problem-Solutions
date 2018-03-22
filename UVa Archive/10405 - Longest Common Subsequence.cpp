#include<bits/stdc++.h>
using namespace std;
int LCS[3000][3000];
int main()
{
    string a,b;
    int m,n;
    while(getline(cin,a))
    {
        getline(cin,b);
        m = a.size();
        n = b.size();

        for(int i=1; i<=m; i++)
            for(int j=1; j<=n; j++)
            {
                if(a[i-1]==b[j-1])
                    LCS[i][j] = LCS[i-1][j-1]+1;
                else
                    LCS[i][j] = max(LCS[i-1][j],LCS[i][j-1]);
            }

        cout<<LCS[m][n]<<endl;
    }
    return 0;
}
