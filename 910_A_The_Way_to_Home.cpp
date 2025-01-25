                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. The Way to Home
Problem link : https://codeforces.com/problemset/problem/910/A
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
int n, d, ans=0;
string s;


bool dfs(int node)
{
    if(n==node)
    {
        return true;
    }
    for(int i=d; i>=1; i--)
    {
        if(node+i<=n && s[node+i-1]=='1')
        {
            node+=i;
            ans++;
            if(dfs(node))
            {
                return true;
            }
        }
    }
    return false;
}

void solve()
{
    cin>>n>>d;
    cin>>s;
    if(dfs(1))
    {
        cout<<ans<<endl;
    }
    else{
        cout<<-1<<endl;
    }
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