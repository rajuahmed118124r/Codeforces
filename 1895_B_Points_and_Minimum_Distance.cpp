                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Points and Minimum Distance
Problem link : https://codeforces.com/contest/1895/problem/B
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
        cin >> n;
        vector<ll>v(2*n);
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        vector<pair<int, int>> p;
        ll ans = 0, i=0;
        for (int i=0; i<n-1; i++)
        {
            ll x = abs(v[i] - v[i + 1]);
            ll y = abs(v[n * 2 - i - 1]) - v[n * 2 - i - 2];
            ans += (x + y);
            p.push_back({v[i], v[n * 2 - i - 1]});
        }
        p.push_back({v[i + 1], v[n * 2 - i - 2]});

        cout << ans << endl;
        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " " << v[n * 2 - i - 1] << endl;
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