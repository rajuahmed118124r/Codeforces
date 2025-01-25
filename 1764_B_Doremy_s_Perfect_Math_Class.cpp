/*
Problem name : B. Doremy's Perfect Math Class
Problem link : https://codeforces.com/problemset/problem/1764/B
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

bool search(int x, vector<int>&v)
{
    for(int i=0; i<v.size(); i++)
    {
        if(v[i] == x)
        {
            return false;
        }
    }
    return true;
}

bool equal(vector<int>&v)
{
    for(int i=2; i<v.size(); i++)
    {
        int z = v[i] - v[i-1];
        if(z != v[i-1])
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    int n, gcd=0;
    cin >> n;
    vector<int> v(n);

    for(int i=0; i<n; i++)
    {
        cin >> v[i];
        gcd = __gcd(v[i], gcd);

    }

    if(v[0]==1)
    {
        cout<<v[n-1]<<endl;
    }
    else{
        cout<<(v[n-1]/gcd)<<endl;
    }
}

int main()
{
    Raju;
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
