#define ONLINE_JUDGE 1
#include <bits/stdc++.h>
using namespace std;
int main()
{ 
    long long n;
    cin>>n;
    long long a;
    //int array[5000];
    for(long long i=1; i<=n; i++)
    {
        cin>>a;
       /* for(int j=0; j<a; j++)
        {
            cin>>array[j];
        }
        */
        //sort(array,array+a);
        //cout<<"Case "<<i<<": "<<array[1]<<endl;
        cout<<(a*(a+1))/2<<endl;
    }
    return 0;
}
