#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int num,temp;
    while(cin>>num)
    {
        temp = 0;
        //temp = 2*(num*(num+1)-num)-1;
        //sum = temp - (num-1);
        temp = ((num/2)+1)*((num/2)+1);
        cout<<6*temp-9<<endl;
    }
    return 0;
}
