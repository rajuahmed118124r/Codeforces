                                                            // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : B. Mashmokh and ACM
Problem link : https://codeforces.com/problemset/problem/414/B
Platform     : Codeforces
Author       : Md. Raju Miah
*/
#include<bits/stdc++.h>
using namespace std;
#define Raju ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define pb push_back
#define yes cout<<'YES'<<endl
#define no cout<<'NO'<<endl
#define zero cout<<0<<endl
#define all(x) (x).begin(), (x).end()

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
const ll mod = 1e9+7;

void raju()
{
    ll n,k;
    cin>>n>>k;
    vector<vector<ll>>dp(k+1, vector<ll>(n + 1, 0));

    for(int i=1; i<=n; i++)
    {
        dp[1][i]=1;
    }
    for(int i=2; i<=k; i++)
    {
        for(int j=1; j<=n; j++)
        {
            for(int x=j; x<=n; x+=j)
            {
                dp[i][x] = (dp[i][x]+dp[i-1][j])%mod;
            }
        }
    }
    ll ans=0;
    for(int i=1; i<=n; i++)
    {
        ans=(ans+dp[k][i])%mod;
    }
    cout<<ans<<endl;
}

int main()
{
    Raju;
    int t=1;
    // cin>>t;
    while(t--)
    {
        raju();
    }
  return 0;
}
                                                                //ٱلْحَمْدُ لِلَّٰهِ