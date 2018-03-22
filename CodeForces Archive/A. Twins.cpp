/**********************************************************************************/
/*                          Problem:  A. Twins
/*                          Language: CPP
/*                          Result: AC
/*                          Author: CodeMechanix                                                                         */
/**********************************************************************************/
#include<bits/stdc++.h>
using namespace std;
int arr[105];
int main()
{
   int n;
    while(cin>>n){
            int sum=0,total=0,cnt=0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+n);
    for(int i=n-1; total<=sum/2 && i>=0; i--)
    {
        total+=arr[i];
        cnt++;
    }
    cout<<cnt<<endl;
    }
    return 0;
}
