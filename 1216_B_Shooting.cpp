                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Shooting
Problem link : https://codeforces.com/contest/1216/problem/B
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
    vector<ll>v(n);
    vector<pair<ll,ll>>vp;
    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
        vp.pb(make_pair(v[i], i+1));
    }
    sort(vp.rbegin(), vp.rend());
    
    ll ans=0;
    for(ll i=0; i<n; i++)
    {
        ans+=(ll)(vp[i].first*i)+1;
    }
    cout<<ans<<endl;
    for(ll i=0; i<n; i++)
    {
        cout<<vp[i].second<<" ";
    }
    cout<<endl;
}


int main()
{
    Raju;
    solve();
return 0;
}


                                                                     ///ALHAMDULILLAH