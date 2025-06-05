                                                            ///BISMILLAHIR RAHMANIR RAHIM
                                                            //============================
/*
Problem name : C. Gellyfish and Flaming Peony
Problem link : https://codeforces.com/contest/2116/problem/C
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


void solve() 
{
    int n; 
    cin >> n;
    vector<int> v(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    } 

    int g = v[1];
    for (int i = 2; i <= n; i++)
    { 
        g = __gcd(g, v[i]);
    }

    int cnt = count(v.begin() + 1, v.end(), g);

    if (cnt > 0) 
    {
        cout << n - cnt << '\n';
        return;
    }

    vector<int> dp(5050, 10000);

    for (int i = 1; i <= n; i++)
    {
        dp[v[i]] = 0;
    }

    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= 5000; j++) 
        {
            int tg = __gcd(v[i], j);
            dp[tg] = min(dp[tg], dp[j] + 1);
        }
    }

    cout << dp[g] + n - 1 << '\n';
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