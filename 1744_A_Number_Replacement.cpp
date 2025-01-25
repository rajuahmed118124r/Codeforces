                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Number Replacement
Problem link : https://codeforces.com/problemset/problem/1744/A
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
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    string s;
    cin>>s;
    map<int, set<char>>mp;
    for(int i=0; i<n; i++)
    {
        mp[v[i]].insert(s[i]);
    }

    for(auto x:mp)
    {
        if(x.second.size()>1)
        {
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
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