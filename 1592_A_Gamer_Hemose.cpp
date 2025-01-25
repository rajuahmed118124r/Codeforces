                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Gamer Hemose
Problem link : https://codeforces.com/contest/1592/problem/A
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
    ll n, h;
    cin>>n>>h;
    vector<ll>v(n);
    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    ll mx = v[n-1];
    ll mx1 = v[n-2];
    ll l=0, r = 1e9+1, ans = r;
    while(l<=r)
    {
        ll mid = (l+r)>>1;
        ll a = mid/2;
        ll b = mid/2;
        if(mid&1)a++;
        if(((a*mx)+(b*mx1))>=h)
        {
            ans = min(ans, mid);
            r = mid -1;
        }
        else{
            l = mid+1;
        }
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