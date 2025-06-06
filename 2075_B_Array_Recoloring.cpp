                                                            ///BISMILLAHIR RAHMANIR RAHIM
                                                            //============================
/*
Problem name : B. Array Recoloring
Problem link : https://codeforces.com/problemset/problem/2075/B
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
    int n, k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    ll ans =0;
    if (k > 1) 
    {
      sort(v.begin(), v.end(), greater<int>());
      ans = accumulate(v.begin(), v.begin() + k + 1, 0LL);
    } 
    else {
      int l = *max_element(v.begin(), v.end() - 1);
      int r = *max_element(v.begin() + 1, v.end());
      ans = max(l + v.back(), r + v[0]);
    }
    cout << ans << '\n';
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