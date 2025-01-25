                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : D. Odd Queries
Problem link : https://codeforces.com/problemset/problem/1807/D
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
    ll n, q;
    cin>>n>>q;
    vector<ll>v(n), pre_sum(n+1);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        pre_sum[i+1]=pre_sum[i]+v[i];
    }

    while(q--)
    {
        ll l,r,k;
        cin>>l>>r>>k;
        ll sum = pre_sum[n] -(pre_sum[r]-pre_sum[l-1]) + (r-l+1)*k;

        if(sum%2==1)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
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
