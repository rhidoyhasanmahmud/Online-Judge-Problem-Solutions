#include<bits/stdc++.h>
using namespace std;
int main()
{
    int val, num, sum ,num1;
    while(cin >> val)
    {
        if(val==0)
            break;
        num = val;
        num1 = val;
        while(num1/10>0)
        {
            sum = 0;
            while (num>0)
            {
                sum = sum + num % 10;
                num = num / 10;
            }
            num1 = sum;
            num = num1;
        }
        cout<<num1<<endl;
    }
    return 0;
}
