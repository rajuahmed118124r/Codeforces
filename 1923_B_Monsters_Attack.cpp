                                        ///BISMILLAHIR RAHMANIR RAHIM 
                                        ///============================
/*
Problem name : B. Monsters Attack!
Problem link : https://codeforces.com/contest/1923/problem/B
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
    ll n, k;
    cin >> n >> k;
    vector<ll> m_h(n), m_p(n);
    for (auto &h : m_h) cin >> h;
    vector<ll> v(n + 1, 0);
    ll f = 0; 
    
    for (ll i = 0; i < n; i++) 
    {
        cin >> m_p[i];
        ll d = abs(m_p[i]);
        f = max(f, d);
        v[d] += m_h[i];
    }

    ll power = k;
    for (ll i = 1; i <= f; i++) 
    {
        power -= v[i];
        if (power < 0) 
        {
            no;
            return;
        }
        power += k;
    }
    yes;
}

signed main() 
{
    Raju;
    int t;
    cin >> t;
    while (t--) 
    {
        solve();
    }
    return 0;
}
