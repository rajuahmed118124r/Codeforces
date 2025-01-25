                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Maximum Sum
Problem link : https://codeforces.com/problemset/problem/1832/B
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
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n),pre(n+1);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(), v.end());

    ll ans = INT_MIN;
    for(int i=0; i<n; i++)
    {
        pre[i+1] = v[i] + pre[i];
    }

    for(int i=0; i<=k; i++)
    {
        ans = max(ans, pre[n-(k-i)] - pre[2*i]);
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