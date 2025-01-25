                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : C. Train and Queries
Problem link : https://codeforces.com/problemset/problem/1702/C
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
    int n, k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    map<int, vector<int>>mp;
    for(int i=0; i<n; i++)
    {
        mp[v[i]].pb(i);
    }

    while(k--)
    {
        int a, b;
        cin>>a>>b;
        if(mp[a].empty() or mp[b].empty())
        {
            cout<<"NO\n";
            continue;
        }
        if(a==b)
        {
            cout<<"YES\n";
            continue;
        }
        if(mp[a].front()<mp[b].back()){
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