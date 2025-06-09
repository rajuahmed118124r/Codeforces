                                                              // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : B. Cost of the Array
Problem link : https://codeforces.com/contest/2059/problem/B
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
    int n, k; cin >> n >> k;
    int a[n+1], pre[n+1] = {0};
    for (int i = 1; i<= n; i++) 
    {
        cin >> a[i];
        pre[i] = pre[i-1] + a[i];
    }

    for (int i = 1; i <= n; i++) 
    {
        int tmp = n - (k - i * 2);
        int val = pre[tmp] - pre[i * 2 - 1];
        if ((tmp - i * 2 + 1) * i != val) 
        {
            cout << i << '\n';
            return;
        }
        else {
            if ((tmp - i * 2 + 1) > 1) 
            {
                cout << i + 1 << '\n';
                return;
            }
        }
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
                                                                //ٱلْحَمْدُ لِلَّٰهِ