                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Computer Game
Problem link : https://codeforces.com/contest/1598/problem/A
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
int dx8[] = {+1, -1, 0, 0, +1, -1, +1, -1};
int dy8[] = {0, 0, -1, +1, +1, -1, -1, +1};
const int N = 104;
char maze[N][N];
int visited[N][N];
int n;

bool is_valid(int x, int y)
{
    if(x<0 || y<0 || x>=2 || y>=n)
    {
        return false;
    }
    if(maze[x][y]=='1')
    {
        return false;
    }
    return true;
}

void dfs(int x, int y)
{
    visited[x][y]=1;
    for(int i=0; i<8; i++)
    {
        int new_x = x + dx8[i];
        int new_y = y + dy8[i];
        if(is_valid(new_x, new_y))
        {
            if(!visited[new_x][new_y])
            {
                dfs(new_x, new_y);
            }
        }
    }
}


void solve()
{
    cin>>n;
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>maze[i][j];
            visited[i][j]=0;
        }
    }

    dfs(0,0);
    if(visited[1][n-1]==1)
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