                                                            // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : C. Rumor
Problem link : https://codeforces.com/contest/893/problem/C
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
const int N = 1e5+10;
vector<ll>edges[N];
bool vis[N];
ll a[N];
ll dfs(ll v)
{
    ll minim = a[v];
    vis[v] =  1;
    for(auto x : edges[v])
    {
        if(!vis[x])
        {
            minim = min(minim,dfs(x));
        }
    }
    return minim;
}

void hehe()
{
    ll n,m;
    cin>>n>>m;

    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(int i=1; i<=m; i++)
    {
        int u,v;
        cin>>u>>v;
        edges[u].push_back(v);
        edges[v].push_back(u);
    }

    ll ans = 0;
    for(int i=1; i<=n; i++)
    {
        if(!vis[i])
        ans = ans + dfs(i);
    }
    cout<<ans<<endl;
}

int main()
{
    Raju;
    int t=1;
    // cin>>t;
    while(t--)
    {
        hehe();
    }
  return 0;
}
                                                                //ٱلْحَمْدُ لِلَّٰهِ

