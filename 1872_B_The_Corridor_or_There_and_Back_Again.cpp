                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. The Corridor or There and Back Again
Problem link : https://codeforces.com/contest/1872/problem/B
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
    ll n, mx, d, s, power;
    cin>>n;
    mx = INT_MAX;
    while(n--)
    {
        cin>>d>>s;
        if(s%2)s++;
        power = d + (s/2)-1;
        mx = min(mx, power);
    }
    cout<<mx<<endl;
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