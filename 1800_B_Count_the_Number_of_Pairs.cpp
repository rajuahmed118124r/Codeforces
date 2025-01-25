                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Count the Number of Pairs
Problem link : https://codeforces.com/problemset/problem/1800/B
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
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    map<char,int>mp;
    for(auto ch:s)
    {
        mp[ch]++;
    }

    int ans=0;
    for(char c='a'; c<='z'; c++)
    {
        int mn = min(mp[c], mp[(c-32)]);
        ans+=mn;
        mp[c]-=mn;
        mp[c-32]-=mn;
    }
    for(char c='a'; c<='z'; c++)
    {
        int add = max(mp[c], mp[c-32]);
        int mn = min(k,add/2);
        ans+=mn;
        k-=mn;
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