                                                            ///BISMILLAHIR RAHMANIR RAHIM
                                                            //============================
/*
Problem name : B. Having Been a Treasurer in the Past, I Help Goblins Deceive
Problem link : https://codeforces.com/contest/2072/problem/B
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
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    int mx = 0, und = 0;
    for (char c : s) 
    {
        if (c == '-') mx++;
        else und++;
    }
    
    if (mx < 2 || und == 0) 
    {
        cout << 0 <<endl;
    } 
    else {
        cout << (1LL * mx * mx / 4) * und <<endl;
    }
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