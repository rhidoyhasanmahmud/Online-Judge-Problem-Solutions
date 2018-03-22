#include<bits/stdc++.h>
using namespace std;
#define PI 3.14159265
int main()
{
    double ox,oy,ax,ay,bx,by,angel,length,distance,radius;
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        angel=0,length=0,distance=0,radius=0;
        cin>>ox>>oy>>ax>>ay>>bx>>by;
        distance = sqrt(((ax-bx)*(ax-bx)) + ((ay-by)*(ay-by)));
        radius = sqrt(((ox-ax)*(ox-ax)) + ((oy-ay)*(oy-ay)));
        angel = acos(1-((distance*distance)/(2*radius*radius)));
        length = radius * angel;
        //cout<<length<<endl;
        printf("Case %d: %lf\n",i,length);
    }
    return 0;
}
