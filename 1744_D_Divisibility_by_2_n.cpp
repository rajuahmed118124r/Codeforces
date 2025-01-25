                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : D. Divisibility by 2^n
Problem link : https://codeforces.com/contest/1744/problem/D
Platform     : Codeforces
Author       : Md. Raju Miah
*/
#include<bits/stdc++.h>
using namespace std;


#define Raju ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define pb push_back
#define all(x) (x).begin(), (x).end()


ll count(ll n)
{
    ll c =0;
    while(n>0 && (n & 1)==0)
    {
        c++;
        n>>=1;
    }
    return c;
}
void solve()
{
    ll n;
    cin>>n;
    ll r = n;  
    vector<ll>v(n), v1;
    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
        while(v[i]%2==0)
        {
            r--;
            v[i]/=2;
        }
    }

    for(ll i=1; i<=n; i++)
    {
        ll c = count(i);
        v1.pb(c);
    }

    sort(v1.begin(), v1.end());
    ll ans=0;
    while(v1.size() && r>0)
    {
        r-=v1.back();
        v1.pop_back();
        ans++;
    }

    if(r>0)
    {
        cout<<-1<<endl;
    }
    else {
        cout<<ans<<endl;
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