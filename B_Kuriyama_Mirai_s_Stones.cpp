                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Kuriyama Mirai's Stones
Problem link : https://codeforces.com/problemset/problem/433/B
Platform     : Codeforces
Author       : Md. Raju Miah
*/
#include<bits/stdc++.h>
using namespace std;


#define Raju ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define pb push_back
#define all(x) (x).begin(), (x).end()


void solve()
{
    ll n;
    cin>>n;
    vector<ll>v(n),v1(n);
    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
        v1[i]=v[i];
    }
    
    sort(v.begin(), v.end());

    vector<ll>dp(n+1,0),dp1(n+1,0);
    for(int i=1; i<=n; i++)
    {
        dp[i] = dp[i-1] + v1[i-1];
        //dp[i] = dp[i-1] + v[i-1];
    }
    for(int i=1; i<=n; i++)
    {
        //dp[i] = dp[i-1] + v1[i-1];
        dp1[i] = dp1[i-1] + v[i-1];
    }
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        ll sum=0;
        if(a==2)
        {
            sum = dp1[c] - dp1[b-1];
        }
        else{
            sum = dp[c] - dp[b-1];
        }
        
        cout<<sum<<endl;
    }
}


int main()
{
    Raju;
    solve();
return 0;
}


                                                                     ///ALHAMDULILLAH