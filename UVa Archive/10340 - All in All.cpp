#include<bits/stdc++.h>
using namespace std;
char str1[100000];
char str2[100000];
bool isSubSequence(char str1[], char str2[], int m, int n)
{
    if (m == 0) return true;
    if (n == 0) return false;
    if (str1[m-1] == str2[n-1])
        return isSubSequence(str1, str2, m-1, n-1);
    return isSubSequence(str1, str2, m, n-1);
}
int main()
{
    while(cin>>str1>>str2)
    {
        int m = strlen(str1);
        int n = strlen(str2);
        isSubSequence(str1, str2, m, n)? cout << "Yes"<<endl:cout << "No"<<endl;
    }
    return 0;
}

