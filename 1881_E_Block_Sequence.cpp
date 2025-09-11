                                                            // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : E. Block Sequence
Problem link : https://codeforces.com/problemset/problem/1881/E
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
    int n;
    cin>>n;
    vector<int>v(n), dp(n+1,0);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    //base case
    dp[n]=0;
    for(int i=n-1; i>=0; i--)
    {
        int opt2 = 1e9;
        int opt1 = dp[i+1]+1;
        if(i+v[i]<n)
        {
            opt2 = dp[i+v[i]+1];
        }
        dp[i] = min(opt1, opt2);
    }
    cout<<dp[0]<<endl;

}

int main()
{
    Raju;
    int t;
    cin>>t;
    while(t--)
    {
        raju();
    }
  return 0;
}
                                                                //ٱلْحَمْدُ لِلَّٰهِ