                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Gifts Fixing
Problem link : https://codeforces.com/problemset/problem/1399/B
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
    ll n, min_a, min_b;
    cin>>n;
    vector<ll> v(n), v1(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>v1[i];
    }
    min_a = *min_element(v.begin(), v.end());
    min_b = *min_element(v1.begin(), v1.end());
    ll ans=0;
    for(int i=0; i<n; i++)
    {
        ans+= max(v[i]-min_a, v1[i]-min_b);
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