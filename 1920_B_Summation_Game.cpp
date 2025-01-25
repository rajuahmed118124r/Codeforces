                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Summation Game
Problem link : https://codeforces.com/problemset/problem/1920/B
Platform     : Codeforces
Author       : Md. Raju Miah
*/
#include<bits/stdc++.h>
using namespace std;


#define Raju ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define pb push_back
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define all(x) (x).begin(), (x).end()


void solve()
{
    int n, k, x;
    cin>>n>>k>>x;
    vector<int>v(n), pre(n+1);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    for(int i=0; i<n; i++)
    {
        pre[i+1]=pre[i] + v[i];
    }
    ll ans = - 1E18;
    for(int i=0; i<=k; i++)
    {
        ll res = -pre[n-i] + 2*pre[max(0, n-i-x)];
        ans = max(ans, res);
    }
    cout<<ans<<endl;
}


int main()
{
    Raju;
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
return 0;
}


                                                                     ///ALHAMDULILLAH