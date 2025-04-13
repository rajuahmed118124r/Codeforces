                                                            ///BISMILLAHIR RAHMANIR RAHIM
                                                            //============================
/*
Problem name : E. Boneca Ambalabu
Problem link : https://codeforces.com/contest/2094/problem/E
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
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++) 
    {
        cin >> v[i];
    }
    
    const int B = 63;
    vector<ll> bt_cnt(B, 0);
    
    for (ll x : v) 
    {
        for (int j = 0; j < B; j++) 
        {
            if (x & (1LL << j)) 
            {
                bt_cnt[j]++;
            }
        }
    }
    
    ll mx = 0;
    for (ll x : v) 
    {
        ll sum = 0;
        for (int j = 0; j < B; j++) 
        {
            if (x & (1LL << j))
            {
                sum += (n - bt_cnt[j]) * (1LL << j);
            }
            else{
                sum += bt_cnt[j] * (1LL << j);
            }
        }
        mx = max(mx, sum);
    }
    
    cout << mx << "\n";
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