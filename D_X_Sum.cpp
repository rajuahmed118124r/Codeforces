                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : D. X-Sum
Problem link : https://codeforces.com/problemset/problem/1676/D
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
    ll n,m;
    cin>>n>>m;
    vector<vector<ll>>v(n, vector<ll>(m));
    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<m; j++)
        {
            cin>>v[i][j];
        }
    }

    ll mx = INT_MIN;
    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<m; j++)
        {
            ll sumx = 0;
            sumx+=v[i][j];
            ll x = i-1;
            ll y = j-1;
            while(x>=0 && y>=0)
            {
                sumx+=v[x][y];
                x--;
                y--;
            }
            x=i-1;
            y=j+1;
            while(x>=0 && y<m)
            {
                sumx+=v[x][y];
                x--;
                y++;
            }
            x = i+1; 
            y = j-1;
            while(x<n && y>=0)
            {
                sumx+=v[x][y];
                x++;
                y--;
            }
            x=i+1;
            y= j+1;
            while(x<n && y<m)
            {
                sumx+=v[x][y];
                x++;
                y++;
            }
            mx = max(mx, sumx);
        }
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

