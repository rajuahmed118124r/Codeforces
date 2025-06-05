                                                            ///BISMILLAHIR RAHMANIR RAHIM
                                                            //============================
/*
Problem name : B. SUMdamental Decomposition
Problem link : https://codeforces.com/contest/2108/problem/B
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
    int n, x;
    std::cin >> n >> x;
    
    if (x == 0) 
    {
        if (n == 1) 
        {
            cout << -1 << "\n";
        } 
        else if (n % 2 == 0) 
        {
            cout << n << "\n";
        } 
        else {
            cout << n + 3 << "\n";
        }
        return;
    }

    if (x == 1) 
    {
        if (n % 2 == 0) 
        {
            cout << n + 3 << "\n";
        } 
        else {
            cout << n << "\n";
        }
        return;
    }
    
    int ans = x;
    int p = __builtin_popcount(x);
    ans += (max(0, n - p) + 1) / 2 * 2;
    cout << ans << "\n";
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