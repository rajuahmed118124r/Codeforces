                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Good Arrays
Problem link : https://codeforces.com/problemset/problem/1856/B
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
    ll sum=0, one =0;
    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
        if(v[i]==1)one++;
        sum+=v[i];
    }
    if(n==1)
    {
        cout<<"NO\n";
    }
    else if((one+n)>sum)
    {
        cout<<"NO\n";
    }
    else {
        cout<<"YES\n";
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