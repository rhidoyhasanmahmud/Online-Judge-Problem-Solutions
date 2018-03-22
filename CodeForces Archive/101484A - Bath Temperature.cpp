/**********************************************************************************/
/*                          Hasan Mahmud[CodeMechanix]
/*                          University of Asia Pacific                                                                         */
/**********************************************************************************/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    int a = 101;
    int b = -1;
    cin>>m>>n;
    int arr[m+1],tmp=1;
    for(int i=0; i<m; i++)
        cin>>arr[i];
    for(int i=0; i<m; i++)
    {
        if(arr[i]==n)
        {
            tmp=0;
            cout<<1<<endl;
            break;
        }
        a = min(a,arr[i]);
        b = max(b,arr[i]);
    }
    if(tmp==1)
    {
        if(n>a && n<b)
            cout<<2<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}
