                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Chemistry
Problem link : https://codeforces.com/problemset/problem/1883/B
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
    int n, k;
    string s;
    cin>>n>>k>>s;
    map<char, int>mp;
    for(int i=0; i<s.size(); i++)
    {
        mp[s[i]]++;
    }
    int cnt=0;
    for(auto x: mp)
    {
        if(x.second%2!=0)cnt++;
    }
    if(cnt-1<=k)yes;
    else no;
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