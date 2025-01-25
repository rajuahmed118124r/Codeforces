                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : C. Sending Messages
Problem link : https://codeforces.com/contest/1921/problem/C
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
    ll n,f,a,b;
    cin>>n>>f>>a>>b;
    vector<ll>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    ll x = 0, m;
    for(int i=0; i<n; i++)
    {
        m = min(b, abs(v[i]-x)*a);
        f -= m;
        x = v[i];

    }

    if(f>0)
    {
        yes;
    }
    else {
        no;
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