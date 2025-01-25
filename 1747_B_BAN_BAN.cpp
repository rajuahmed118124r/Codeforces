                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. BAN BAN
Problem link : https://codeforces.com/problemset/problem/1747/B
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
    string s="0";
    for(int i=0; i<n; i++)
    {
        s+="BAN";
    }
    
    int sz = s.size()-1;
    vector<pair<int,int>>v;
    int l=2, r=sz;
    while(l<r)
    {
        v.pb({l,r});
        swap(s[l], s[r]);
        l+=3;
        r-=3;
    }
    cout<<v.size()<<endl;
    for(auto x:v)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
    // cout<<s<<endl;
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