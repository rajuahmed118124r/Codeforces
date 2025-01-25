                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Three Threadlets
Problem link : https://codeforces.com/problemset/problem/1881/B
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
    ll n,x,y,z,g;
    cin>>x>>y>>z;
    g = __gcd(__gcd(x,y),z);
    n=(x/g)-1+(y/g)-1+(z/g)-1;
    if(n<=3) cout<<"YES\n";
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