                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : C1. Powering the Hero (easy version)
Problem link : https://codeforces.com/contest/1800/problem/C1
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
    vector<ll>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    ll ans=0;
    priority_queue<ll>pq;
    for(int i=0; i<n; i++)
    {
        if(v[i]==0)
        {
            if(pq.empty())continue;
            else{
                ans+=pq.top();
                pq.pop();
            }
        }
        else{
            pq.push(v[i]);
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