                                                            ///BISMILLAHIR RAHMANIR RAHIM
                                                            //============================
/*
Problem name : B. Set of Strangers
Problem link : https://codeforces.com/contest/2069/problem/B
Platform     : Codeforces
Author       : Md. Raju Miah
*/
#include<bits/stdc++.h>
using namespace std;
#define Raju ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define pb push_back
#define zero cout<<0<<endl
#define all(x) (x).begin(), (x).end()

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
const int N = 1e3;
char maze[N][N];
int visited[N][N];

void solve() 
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> gd(n, vector<int>(m));
    unordered_map<int, int> c_cst;
    
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            cin >> gd[i][j];
            c_cst[gd[i][j]] = 1;
        }
    }
    
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            int color = gd[i][j];
            pair<int, int> dir[] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
            for (int k = 0; k < 4; k++) 
            {
                int ni = i + dir[k].first;
                int nj = j + dir[k].second;
                if (ni >= 0 && ni < n && nj >= 0 && nj < m && gd[ni][nj] == color) 
                {
                    c_cst[color] = 2;
                }
            }
        }
    }
    
    int t_cst = 0, m_cst = 0;
    for (unordered_map<int, int>::iterator it = c_cst.begin(); it != c_cst.end(); ++it) 
    {
        t_cst += it->second;
        m_cst = max(m_cst, it->second);
    }
    
    cout << t_cst - m_cst << "\n";
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
                                                                //ALHAMDULILLAH