                                                            // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : A. Cut Ribbon 
Problem link : https://codeforces.com/problemset/problem/189/A
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


int SOLVE(int n, int a, int b, int c)
{
    vector<int>dp(n+1,-1e9);
    dp[0]=0;
    for(int i=1; i<=n; i++)
    {
        if(i>=a)
        {
            dp[i]=max(dp[i],dp[i-a]+1);
        }
        if(i>=b)
        {
            dp[i]=max(dp[i],dp[i-b]+1);
        }
        if(i>=c)
        {
            dp[i]=max(dp[i],dp[i-c]+1);
        }
    }
    return dp[n];
}
void raju()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    cout<<SOLVE(n,a,b,c)<<endl;
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