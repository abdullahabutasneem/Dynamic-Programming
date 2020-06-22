#include<bits/stdc++.h>
using namespace std;
const long long MOD = 1000000007;
#define fil(x) memset(x, 0, sizeof(x))
#define fillb(x) memset(x,false,sizeof(x))
#define fillm(x) memset(x, -1, sizeof(x))
#define fo(i,n) for(int i=0;i<n;i++)
#define fo1(i,n) for(int i=1;i<n;i++)
#define fof(i,a,b) for(int i=a;i<=b;i++)

int dp[100005];
int a[100005];
int n,k;

int func(int ind)
{
    if(ind==n) return 0;
    int mn = INT_MAX;
    if(dp[ind]!=-1)return dp[ind];
    for(int i=ind+1; i<= min(ind+k, n); i++)
    {
        mn = min(mn, abs(a[ind]-a[i])+func(i));
    }
    return dp[ind] = mn;
}

int main()
{
    fillm(dp);
    cin>>n>>k;
    fof(i,1,n)cin>>a[i];
    cout<<func(1);
    return 0;
}

///Alhamdulillah
