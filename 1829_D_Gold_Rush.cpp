                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : D. Gold Rush
Problem link : https://codeforces.com/contest/1829/problem/D
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
const int N = 1e3;
char maze[N][N];
map<ll, bool> visited;

bool dfs(int n, int m)
{
    if(n==m) return true;
    visited[n] = true;

    if(n%3==0)
    {
        ll next1 = n/3;
        ll next2 = 2 * (n/3);
        if(!visited[next1] && dfs(next1, m))
        {
            return true;
        }
        if(!visited[next2] && dfs(next2, m))
        {
            return true;
        }
    }
    return false;
}


void solve()
{
    int n, m;
    cin>>n>>m;
    visited.clear();
    if(dfs(n,m))
    {
        yes;
        return;
    }
    no;
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