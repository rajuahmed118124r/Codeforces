                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Promo
Problem link : https://codeforces.com/contest/1697/problem/B
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
    ll n,q;
    cin>>n>>q;
    vector<ll>v(n), prefix_sum(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    ll s = 0;
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    for(int i=0; i<n; i++)
    {
        s+=v[i];
        prefix_sum[i] = s;
    }

    while(q--)
    {
        ll x,y;
        cin>>x>>y;
        
        if(x==y)
        {
            cout<<prefix_sum[x-1]<<endl;
        }
        else{
            cout<<prefix_sum[x-1] - prefix_sum[x-y-1]<<endl;
        }
    }
}


int main()
{
    Raju;
    solve();
return 0;
}


                                                                     ///ALHAMDULILLAH