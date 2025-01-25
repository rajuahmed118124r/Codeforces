                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Sorting with Twos
Problem link : https://codeforces.com/contest/1891/problem/A
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
    for(ll i=0;i<n;i++) 
    {
        cin>>v[i];
    }
    ll f=v[0],flag=0;
    for(ll i=1;i<n;i++)
    {
        if(f>v[i])
        {
            if(((i-1)&i)!=0)
            {
                flag=1;
            }
        }
        f=v[i];
    }
    if(flag) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
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