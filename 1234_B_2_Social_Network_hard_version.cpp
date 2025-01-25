                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B2. Social Network (hard version)
Problem link : https://codeforces.com/contest/1234/problem/B2
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
    ll n, k;
    cin>>n>>k;
    map<ll,ll>mp;
    deque<ll>dq;
    vector<ll>v(n);
    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
    }
    for(int i=0; i<n; i++)
    {
        if(mp[v[i]]>=1)continue;
        if(dq.empty())
        {
            dq.pb(v[i]);
            mp[v[i]]++;
        }
        else{
            if(dq.size()<k)
            {
                dq.push_front(v[i]);
                mp[v[i]]++;
            }
            else{
                ll x = dq.back();
                dq.pop_back();
                mp[x]--;
                dq.push_front(v[i]);
                mp[v[i]]++;
            }
        }
    }
    cout<<dq.size()<<endl;
    for(auto x:dq)
    {
        cout<<x<<" ";
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