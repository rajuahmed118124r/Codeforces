                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. AND 0, Sum Big
Problem link : https://codeforces.com/contest/1514/problem/B
Platform     : Codeforces
Author       : Md. Raju Miah
*/
#include<bits/stdc++.h>
using namespace std;


#define Raju ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define pb push_back
#define all(x) (x).begin(), (x).end()
ll mod = 1e9 +7;

void solve()
{
    int n,k;
    cin>>n>>k;
    int ans=1;
    while(k--)
    {
        ans = ((ans%mod)* (n%mod))%mod;
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