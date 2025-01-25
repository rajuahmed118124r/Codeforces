                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Forming Triangles
Problem link : https://codeforces.com/contest/1922/problem/B
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
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> mp;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }
    ll sum = 0, res = 0;
    for(auto x : mp)
    {
        ll cnt = x.second;
        if(cnt >= 3)
        {
            res += cnt * (cnt - 1) * (cnt - 2) / 6;
        }
        if(cnt >= 2)
        {
            res += cnt * (cnt - 1) / 2 * sum;
        }
        sum += cnt;
    }
    cout << res << endl;
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