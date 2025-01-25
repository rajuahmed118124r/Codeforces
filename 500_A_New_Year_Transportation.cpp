                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. New Year Transportation
Problem link : https://codeforces.com/problemset/problem/500/A
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


int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
const int N = 1e5 + 123;
vector<int>adj_list[N];
bool visited[N];

void dfs(int node)
{
    visited[node] = true;
    for(auto adj_node : adj_list[node])
    {
        if(!visited[adj_node])
        {
            dfs(adj_node);
        }
    }
}

void solve()
{
    int n,t;
    cin>>n>>t;
    for(int i=1; i<n; i++)
    {
        int x;
        cin>>x;
        adj_list[i].pb(i+x);
    }
    dfs(1);
    if(visited[t])
    {
        yes;
        return;
    }
    no;
}


int main()
{
    Raju;
    int t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }
return 0;
}


                                                                     ///ALHAMDULILLAH