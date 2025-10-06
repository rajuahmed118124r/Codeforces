                                                            // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : B. Obsession with Robots
Problem link : https://codeforces.com/problemset/problem/8/B
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
    string s;
    cin>>s;
    int x=0, y=0;
    set<pair<int,int>>visited;
    visited.insert({x,y});

    for(int i=0; i<s.size(); i++)
    {
        int px = x, py = y;
        if(s[i]=='L')
        {
            x--;
        }
        else if(s[i]=='R')
        {
            x++; //x=0,y = -1
        }
        else if(s[i]=='U')
        {
            y++;
        }
        else if(s[i]=='D')
        {
            y--;
        }
        
        if(visited.count({x,y}))
        {
            cout<<"BUG"<<endl;
            return;
        }

        for(int k=0; k<4; k++)
        {
            int nx = x + dx[k];
            int ny = y + dy[k];
            if(nx==px && ny==py)continue;
            if(visited.count({nx,ny}))
            {
                cout<<"BUG"<<endl;
                return;
            }
        }
        visited.insert({x,y});
    }
    cout<<"OK"<<endl;
}

int main()
{
    Raju;
    int t=1;
    // cin>>t;
    while(t--)
    {
        raju();
    }
  return 0;
}
                                                                //ٱلْحَمْدُ لِلَّٰهِ