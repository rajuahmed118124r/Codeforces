                                                            // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : B. Preparing Olympiad
Problem link : https://codeforces.com/problemset/problem/550/B
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
    long long l, r, x;
    cin >> n >> l >> r >> x;

    vector<long long> c(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> c[i];
    }

    int ans = 0;

    for (int mask = 0; mask < (1 << n); mask++) 
    {
        vector<long long> subset;
        long long sum = 0;
        long long mn = 1e9, mx = -1e9;

        for (int i = 0; i < n; i++) 
        {
            if (mask & (1 << i)) 
            {
                subset.push_back(c[i]);
                sum += c[i];
                mn = min(mn, c[i]);
                mx = max(mx, c[i]);
            }
        }

        if (subset.size() >= 2 && sum >= l && sum <= r && (mx - mn) >= x)
        {
            ans++;
        }
    }
    cout << ans << endl;
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