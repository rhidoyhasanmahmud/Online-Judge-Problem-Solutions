#include<bits/stdc++.h>
#define ll long long int
#define takell(a) scanf("%lld",&a)
#define csll printf("Case %d: ",keis++)
using namespace std;
ll MOD = 1000000007;
ll Big_Mod(int base, int power)
{
    if(power==0)
        return 1;
    ll temp = Big_Mod(base,power>>1);
    temp = (temp*temp)%MOD;
    if(power&1)
        temp = (temp*base)%MOD;
    return temp;
}
int main()
{
    ll t,i,j,k,l,mod,ans,keis=1;
    char ch[10005];
    takell(t);
    getchar();
    while(t--)
    {
        gets(ch);
        l = strlen(ch);
        mod =0;
        for(i=0; i<l; i++)
        {
            k = ch[i]-'0';
            mod = mod*10+k;
            mod = (mod)%(MOD-1);
        }
        ans = Big_Mod(3,mod);
        ans = (ans+1)%MOD;
        ans = ans*Big_Mod(2,MOD-2);
        ans%=MOD;
        ans = (ans+MOD)%MOD;
        csll;
        printf("%lld\n",ans);
    }
    return 0;
}
