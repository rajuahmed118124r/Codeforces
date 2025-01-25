                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Array Decrements
Problem link : https://codeforces.com/problemset/problem/1690/B
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
    vector<int>v(n), v1(n);
    set<int>st;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    
    for(int i=0; i<n; i++)
    {
        cin>>v1[i];
    }
    int mx =0;
    for(int i=0; i<n; i++)
    {
        mx = max(mx, v[i]-v1[i]);
    }
    for(int i=0; i<n; i++)
    {
        v[i] = max(v[i]-mx, 0);
    }
    cout<<((v==v1)?"YES":"NO")<<endl;
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