/*
*******************************************************************************
**                  ===================================                      **
**                  =  Name       :  Hasan Mahmud
**                  =  Institute  :  UAP,CSE
**                  =  Email      :  hasan404cse@gmail.com
**                  ===================================                      **
*******************************************************************************
*/
#include<bits/stdc++.h>
using namespace std;

#define FastRead	      ios_base::sync_with_stdio(0);cin.tie(0);
#define fRead		      freopen("in.txt","r",stdin);
#define fWrite		      freopen("out.txt","w",stdout);

#define l		      long
#define ll		      long long
#define ull		      unsigned long long
#define sf		      scanf
#define pf		      printf
#define PI		      acos(-1.0)
#define all(a)		      a.begin(),a.end()

#define min3(a,b,c)	      min(a,min(b,c))
#define max3(a,b,c)	      max(a,max(b,c))
#define min4(a,b,c,d)	      min(a,min(b,min(c,d)))
#define max4(a,b,c,d)	      max(a,max(b,max(c,d)))

#define ABS(x)		      ((x)<0?-(x):(x))
#define SORT(v)		      sort(v.begin(),v.end())
#define REV(v)		      reverse(v.begin(),v.end())

ll gcd(ll a,ll b)     {return b==0 ? a : gcd(b,a%b);}
ll lcm(ll a,ll b)     {return (a/gcd(a,b))*b;}
ll square(ll x)       {return x*x;}
l bigmod(l b,l p,l m) {if(p==0)return 1; else if(p%2==0)return square(bigmod(b,p/2,m)) % m; else return ((b%m) * bigmod(b,p-1,m)) % m;}

void Go(ll num1,ll num2)
{
	if(num1>=num2)
            cout<<num1-num2<<endl;
        else
            cout<<num2-num1<<endl;
}
int main()
{
	FastRead
	ll num1,num2;
	while(scanf("%lld%lld",&num1,&num2) != EOF){Go(num1,num2);}
	return 0;
}


