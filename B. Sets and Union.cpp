                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Sets and Union
Problem link : https://codeforces.com/contest/1882/problem/B
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
    vector<vector<ll>>v;
    for(int i=0; i<n; i++)
    {
        ll x;
        cin>>x;
        vector<ll>temp;
        for(int j=0; j<x; j++)
        {
            ll y;
            cin>>y;
            temp.pb(y);
        }
        v.pb(temp);
    }
    set<ll>s;
    for(int i=0; i<n; i++)
    {
        for(auto x : v[i])
        {
            s.insert(x);
        }
    }
    ll ans =0;
    for(auto x:s)
    {
        set<ll> st;
        for(int i=0; i<n; i++)
        {
            bool t = false;
            for(auto d:v[i])
            {
                if(x==d)
                {
                    t = true;
                }
            }
            if(t==true)
            {
                continue;
            }
            else{
                for(auto d:v[i])
                {
                    st.insert(d);
                }
            }
        }
        ll sz = st.size();
        ans = max(ans, sz);
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