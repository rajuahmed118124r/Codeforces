/*
Problem name : A. Cover in Water
Problem link : https://codeforces.com/contest/1900/problem/A
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

bool search3(vector<int>&v)
{
    for(int i=0; i<v.size(); i++)
    {
        if(v[i]>=3)
        {
            return true;
        }
    }
    return false;
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int c = 0, dot = 0, total_dot=0;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        if(s[i]=='.')
        {
            total_dot++;
        }
        if (s[i] == '#')
        {
            if (dot > 0)
            {
                v.pb(dot);
                dot = 0;
            }
        }
        else
        {
            dot++;
        }
    }

    if (dot > 0)
    {
        v.pb(dot);
    }

    if(search3(v))
    {
        cout<<2<<endl;
    }
    else{
        cout<<total_dot<<endl;
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
