                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : C. Arrow Path
Problem link : https://codeforces.com/contest/1948/problem/C
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
const int N = 2e5+5;
char maze[2][N];
int visited[2][N], row, col;

bool valid(int x, int y)
{
    return x>=0 && y>=0 && x<row && y<col && visited[x][y]!=1;
}

void dfs(int x, int y, int turn)
{
    visited[x][y]=1;
    if(turn==1)
    {
        if(maze[x][y]=='>')dfs(x, y+1, turn^1);
        else dfs(x, y-1, turn^1);
    }
    else{
        for(int i=0; i<4; i++)
        {
            int new_x = x + dx[i];
            int new_y = y + dy[i];
            if(valid(new_x, new_y))
            {
                dfs(new_x, new_y, turn^1);
            }
        }
    }
}

void solve()
{
    row =2;
    cin>>col;
    for(int i=0; i<row; i++)
    {
        cin>>maze[i];
    }
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<col; j++)
        {
            visited[i][j]=0;
        }
    }
    dfs(0,0,0);
    if(visited[1][col-1])
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