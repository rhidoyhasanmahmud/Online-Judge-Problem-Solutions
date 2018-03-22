/*
*******************************************************************************
**                  ===================================                      **
**                  =  Name       :  Hasan Mahmud
**                  =  Institute  :  UAP
**                  =  Dept       :  CSE
**                  =  Email      :  hasan404cse@gmail.com
**                  ===================================                      **
*******************************************************************************
*/
#include<bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
#define s scanf
#define p printf
using namespace std;
int main()
{
    optimizar_io;
    int a,b,c;
    int maximo = INT_MIN;
    cin >> a >> b >> c;
    maximo = max(maximo,a*b*c);
    maximo = max(maximo,a+b*c);
    maximo = max(maximo,a*b+c);
    maximo = max(maximo,a+b+c);
    maximo = max(maximo,(a+b)*c);
    maximo = max(maximo,a*(b+c));
    cout << maximo << endl;
    return 0;
}
