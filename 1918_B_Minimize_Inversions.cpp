                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Minimize Inversions
Problem link : https://codeforces.com/contest/1918/problem/B
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

    vector<int> v(n), v1(n);
    for (int i = 0; i < n; ++i) 
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; ++i) 
    {
        cin >> v1[i];
    }
    vector<pair<int, int>> p;
    for (int i = 0; i < n; ++i) 
    {
        p.push_back({v[i], v1[i]});
    }

    sort(p.begin(), p.end());

    for (int i = 0; i < n; ++i) 
    {
        v[i] = p[i].first;
        v1[i] = p[i].second;
    }

    for (auto x:v) 
    {
        cout <<x<< " ";
    }
    cout << endl;

    for (auto y:v1) {
        cout << y << " ";
    }
    cout << endl;
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