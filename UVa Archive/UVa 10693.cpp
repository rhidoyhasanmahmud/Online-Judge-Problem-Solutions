#include<bits/stdc++.h>
using namespace std;
int main()
{
    double dis,force,vel,vol,L;
    while(cin>>L>>force)
    {
        if(L==0 && force==0)
            break;
        else
        {
            vel = sqrt(2*force*L);
            vol = (vel*3600)/(2*L);
        }
        printf("%.8lf %.8lf\n",vel,vol);
    }
    return 0;
}
