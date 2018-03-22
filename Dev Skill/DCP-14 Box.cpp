#define ONLINE_JUDGE 1
/* .................................Bismillah......................................
---------------------[Tommorrow You Will Wish You Had Started Today]---------------
						   Hasan Mahmud [ NightTrain_404 ]
						   CSE, University of Asia Pacific
...................................................................................
*/
#include<bits/stdc++.h>
using namespace std;
#define INF   1023456789LL
#define INF16 10000000000000000LL
#define PI    acos(-1.0)
#define ll long long int
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define myabs(a) ((a)<0?(-(a)):(a))
#define N     100000000 // For Sieve Of Eratosthenes
int Table[N]; // For Sieve Of Eratosthenes
/* Input Until Enter press->getline(cin,str);stringstream ss(str);while(ss>>temp)num[i++] = temp;*/
/* 9^N = result (find the last digit of result [10183823 (result is 3) )
static int table[] ={0, 0, 0, 0, 1, 1, 1, 1, 6, 2, 4, 8, 1, 3, 9, 7, 6, 4, 6, 4,5, 5, 5, 5, 6, 6, 6, 6, 1, 7, 9, 3, 6, 8, 4, 2, 1, 9, 1, 9};
int unit_digit(int n, int a) { return table[((n%10)<<2)+(a&3)]; }
*/
//.............................................................................................................................................................................................................................................................................................................................long bigmod(long a,long b,long m){ if(b==0) { return 1%m; } int x = bigmod(a,b/2,m); x = (x*x)%m; if(b%2==1) x = (x*a)%m; return x; }
ll square(ll x) {return x*x;}
ll GCD(ll x,ll xx)  {  return xx==0 ? x : GCD(xx,x%xx); }
ll LCM(ll a,ll b)  { return (a/GCD(a,b))*b; }
bool isPrime(ll n){ if (n <= 1)  return false; if (n <= 3)  return true;if (n%2 == 0 || n%3 == 0) return false; for (int i=5; i*i<=n; i=i+6) if (n%i == 0 || n%(i+2) == 0){return false; }return true; }
void SieveOfEratosthenes(){ int i=2;for(; i<=N; ++i){Table[i]=1;} Table[0] = Table[1] = 0;int len = sqrt(N);for( i=2; i<=len; i++){if(Table[i]){for(int k = i*i; k<=N; k+=i)Table[k]=0;} }Table[2]=0;}
ll CountDivisors(ll x){ ll limit = x;ll numberOfDivisors = 0;if (x == 1) return 1;for (int i = 1; i < limit; ++i){if (x % i == 0){limit = x / i;if (limit != i){numberOfDivisors++;}numberOfDivisors++;}}return numberOfDivisors;}
ll SumDivisors(ll num)/*10^8*/{ll sum=0;for(int i=1; i*i<=num; i++){sum += (num%i)? 0 : ((i*i==num)? i : i+num/i); }return sum;}
//.............................................................................................................................................................................................................................................................................................................................
int main()
{
    double ab,bc,cd;
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%lf%lf%lf",&ab,&bc,&cd);
        double sum = sqrt((sqrt((ab*ab) + (bc*bc)))*(sqrt((ab*ab) + (bc*bc)))+(cd*cd));
        printf("%.2lf\n",sum);
        sum=0;
    }
	return 0;
}

