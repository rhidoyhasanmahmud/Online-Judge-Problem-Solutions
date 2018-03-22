#include <bits/stdc++.h>
using namespace std;
typedef long long int LLI;
typedef long long LL;
typedef unsigned long long int uLLI;
LLI bigMod(LLI A,LLI P,int M){ LLI R=1; for(A%=M; P; P>>=1) { if(P&1) R=(R*A)%M; A=(A*A)%M; } return R; } /** (A^P) % M **/
LLI bigMul(LLI A,LLI B,LLI M) { LLI R=0; for(A%=M; B; B>>=1) { if(B&1) R=(R+A)%M; A=(A+A)%M; } return R; } /** (A*B) % M **/
LLI negMod(LLI A,LLI B) { return ( ( ( A % B ) + B) % B ); } /** (A % B) when A is negative or positive **/
LLI invMod(LLI A,LLI M) { return bigMod( A , M-2, M ); } /** (A^(-1)) % M */
uLLI _pow(uLLI A,int P) { uLLI R=1; for(; P; P>>=1) { if(P&1) R=(R*A); A=(A*A); } return R; } /** (A^P) **/
template<class T>T GCD(T x, T y) { while(x) x^=y^=x^=y%=x; return y; } /** Greatest Common Divisor( a , b ) **/
template<class T>T LCM(T x, T y) {return (x/GCD(x,y))*y;} /**Least Common Multiple**/
#define myMem(a,b) memset(a,b,sizeof(a))
#define pi            acos(-1)
#define PI 3.141592653589793
#define sf scanf
#define pf printf
#define pb            push_back
#define inc_sort(v) sort(v.begin(),v.end())
#define dec_sort(v) sort(v.begin(),v.end(),greater<LLI>())
#define maxofaray(v) *max_element(v.begin(),v.end())
int main()
{
  LL a,b;
  sf("%lld%lld",&a,&b);
  LL mx=max(a,b);
  pf("%lld\n",mx);
  return 0;
}
