                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : E. 2-Letter Strings
Problem link : https://codeforces.com/contest/1669/problem/E
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
    map<char, ll> mp1;
    map<char, ll>mp2;
    map<string,ll>mp3;
    vector<string>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        mp1[v[i][0]]++;
        mp2[v[i][1]]++;
        mp3[v[i]]++;
    }

    ll ans = 0;
    for(ll i=0; i<n; i++)
    {
        ll x = max((ll)0, (mp1[v[i][0]] - mp3[v[i]]));
        ans+=x;

        x = max((ll)0, (mp2[v[i][1]] - mp3[v[i]]));
        ans+=x;
        if(mp1[v[i][0]]>0)mp1[v[i][0]]--;
        if(mp2[v[i][1]]>0)mp2[v[i][1]]--;
        if(mp3[v[i]]>0)mp3[v[i]]--;
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