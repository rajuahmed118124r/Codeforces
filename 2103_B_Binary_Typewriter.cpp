                                                            ///BISMILLAHIR RAHMANIR RAHIM
                                                            //============================
/*
Problem name : B. Binary Typewriter
Problem link : https://codeforces.com/contest/2103/problem/B
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
    string s;
    cin >> s;

    int B = 1;
    for(int i = 1; i < n; i++)
    {
        if(s[i] != s[i-1])B++;
    }

    int I_old = (s[0]=='0');

    int f_orig = B - I_old, rmv = 0;
    if(B >= 4)rmv = 2;
    else if(B == 3)rmv = 1;
    int f1 = f_orig - rmv, f2 = INT_MAX;
    for(int r = 1; r <= n; r++)
    {
        int orig_cut = 0;
        if(r < n && s[r-1] != s[r]) 
            orig_cut = 1;
        int new_cut = 0;
        if(r < n && s[0]   != s[r]) 
            new_cut = 1;
        int I_new = (s[r-1]=='0');
        int cur = B - orig_cut + new_cut - I_new;
        f2 = min(f2, cur);
    }

    int best_f = min({f_orig, f1, f2});
    if(best_f < 0) best_f = 0; 
    ll answer = (ll)n + best_f;
    cout << answer << "\n";
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