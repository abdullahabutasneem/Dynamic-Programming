#include<bits/stdc++.h>
using namespace std;
const long long MOD = 1000000007;
int dp[100005];
int a[100005];
int n;
int func(int ind)
{
    if(ind==n-1)return 0;
    if(ind>=n) return INT_MAX;

    if(dp[ind]!=-1) return dp[ind];

    int left = abs(a[ind]-a[ind+1]) + func(ind+1);
    int right = INT_MAX;

    if(ind+2<n){
        right = abs(a[ind]-a[ind+2]) + func(ind+2);
    }
    return dp[ind] = min(left,right);
}

int main()
{
    memset(dp,-1,sizeof dp);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<func(0);
    return 0;
}

///Alhamdulillah
