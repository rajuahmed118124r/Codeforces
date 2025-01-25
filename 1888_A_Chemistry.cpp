                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Chemistry
Problem link : https://codeforces.com/contest/1888/problem/A
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
    int n, k,cnt=0;
    string s;
    cin>>n>>k>>s;
    map<char, int>mp;
    for(auto x:s)
    {
        mp[x]++;
    }
    for(auto i:mp)
    {
        if(i.second%2==1)cnt++;
    }
    if(cnt-1<=k)cout<<"YES\n";
    else cout<<"NO\n";
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