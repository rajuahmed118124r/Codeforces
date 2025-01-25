                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Collecting Game
Problem link : https://codeforces.com/contest/1904/problem/B
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
    ll n;
    cin>>n;
    vector<pair<ll, ll>>v(n);
    ll sum =0;
    for(int i=0; i<n; i++)
    {
        cin>>v[i].first;
        v[i].second = i;
    }

    sort(v.begin(), v.end());
    vector<ll>pre(n,0);
    pre[0] = v[0].first;
    for(int i=1; i<n; i++)
    {
        pre[i]= pre[i-1] + v[i].first;
    }

    vector<ll>ans(n, -1);
    stack<int>st;
    for(int i=0; i<n; i++)
    {
        st.push(v[i].second);
        if(i==n-1 || v[i+1].first > pre[i])
        {
            while(!st.empty())
            {
                ans[st.top()] = i;
                st.pop();
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
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