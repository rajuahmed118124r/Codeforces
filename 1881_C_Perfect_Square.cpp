                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : C. Perfect Square
Problem link : https://codeforces.com/problemset/problem/1881/C
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
int visited[N][N];

void check(vector<vector<char>>&v, int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            swap(v[i][j], v[j][i]);
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n/2; j++)
        {
            swap(v[i][j], v[i][n-j-1]);
        }
    }
}

bool Equal(vector<vector<char>>&v, vector<vector<char>>&v2)
{
    return v==v2;
}

void solve()
{
    int n;
    cin>>n;
    vector<string>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    int ans = 0;
    
    for(int i=0; i<n/2; i++)
    {
        for(int j=0; j<n/2; j++)
        {
            char ch[4] = {v[i][j], v[j][n-i-1], v[n-i-1][n-j-1], v[n-j-1][i]};
            char mx = max(max(ch[0], ch[1]), max(ch[2], ch[3]));
            for(int x=0; x<4; x++)
            {
                ans+=mx-ch[x];
            }
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
        solve();
    }
return 0;
}


                                                                     ///ALHAMDULILLAH