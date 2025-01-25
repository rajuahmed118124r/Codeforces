                                                                    ///BISMILLAHIR RAHMANIR RAHIM
                                                                   ///============================
/*
Problem name : B. Squares and Cubes
Problem link : https://codeforces.com/problemset/problem/1619/B
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
    cin >> n;
    set<ll> s;

    for (ll i=1; i*i<=n; i++)
    {
        s.insert(i * i);
    }

    for (ll i=1; i*i*i<=n; i++)
    {
        s.insert(i*i*i);
    }

    cout << s.size() << endl;
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
