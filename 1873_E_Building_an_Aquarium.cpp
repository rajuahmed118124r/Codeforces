                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : E. Building an Aquarium
Problem link : https://codeforces.com/problemset/problem/1873/E
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
    ll n, w;
    cin>>n>>w;
    vector<ll>v(n);
    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
    }

    ll l = 1, r=INT_MAX, ans;
    while(l<=r)
    {
        ll mid = l + (r-l)/2;
        ans = 0;
        for(ll i=0; i<n; i++)
        {
            if(v[i]<mid)
            {
                ans+=(mid-v[i]);
            }
        }
        if(ans>w)
        {
            r = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    cout<<r<<endl;
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