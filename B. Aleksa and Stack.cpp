                                                        ///BISMILLAHIR RAHMANIR RAHIM
                                                       ///============================
/*
Problem name : B. Aleksa and Stack
Problem link : https://codeforces.com/contest/1878/problem/B
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
    int t;
    cin>>t;
    while(t--)
    {
    ll n;
    cin>>n;
    vector<ll>v;
    ll a = n*2-1;
    ll b = a+2;
    ll c = b+2;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    ll sub = n-3;
    for(ll i=0; i<sub; i++)
    {
        ll d = c+=2;
        v.pb(d);
    }
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.clear();
}
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
