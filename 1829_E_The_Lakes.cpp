                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : E. The Lakes
Problem link : https://codeforces.com/contest/1829/problem/E
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
const int N = 1111;
int maze[N][N];
int visited[N][N];
int n,m;

bool is_valid(int x, int y) 
{
    return (x >= 0 && y >= 0 && x < n && y < m && maze[x][y] != 0 && !visited[x][y]);
}

int dfs(int x, int y) 
{
    visited[x][y] = true;
    int ans = maze[x][y];
    for (int i = 0; i < 4; i++) 
    {
        int new_x = x + dx[i];
        int new_y = y + dy[i];
        if (is_valid(new_x, new_y)) 
        {
            ans += dfs(new_x, new_y);
        }
    }
    return ans;
}

void solve() 
{
    cin >> n >> m;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            cin >> maze[i][j];
            visited[i][j] = false;
        }
    }

    int cnt = 0;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            if (maze[i][j]!= 0 && !visited[i][j]) 
            {
                cnt = max(cnt, dfs(i, j));
            }
        }
    }
    cout << cnt << endl;
}

int main() 
{
    Raju;
    int t;
    cin >> t;
    while (t--) 
    {
        solve();
    }
    return 0;
}


                                                                     ///ALHAMDULILLAH