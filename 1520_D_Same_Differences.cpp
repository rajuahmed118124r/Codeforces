                                                            // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : D. Same Differences
Problem link : https://codeforces.com/problemset/problem/1520/D
Platform     : Codeforces
Author       : Md. Raju Miah
*/
#include<bits/stdc++.h>
using namespace std;
#define Raju ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define pb push_back
#define yes cout<<'YES'<<endl
#define no cout<<'NO'<<endl
#define zero cout<<0<<endl
#define all(x) (x).begin(), (x).end()

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
const int N = 1e3;
char maze[N][N];
int visited[N][N];

void raju()
{
    ll n;
    cin>>n;
    vector<ll>v(n+1);
    map<ll,ll>mp;
    for(ll i=1; i<=n; i++)
    {
        cin>>v[i];
        ll x = v[i]-i;
        mp[x]++;
    }

    ll ans = 0;
    for(auto z: mp)
    {
        if(z.second>1)
        {
            ll y = z.second;
            ans = ans + y*(y-1)/2;
        }
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
        raju();
    }
  return 0;
}
                                                                //ٱلْحَمْدُ لِلَّٰهِ