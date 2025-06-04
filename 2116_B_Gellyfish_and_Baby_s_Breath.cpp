                                                            ///BISMILLAHIR RAHMANIR RAHIM
                                                            //============================
/*
Problem name : B. Gellyfish and Baby's Breath
Problem link : https://codeforces.com/contest/2116/problem/B
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
const int N = 1e5+5;
const int mod = 998244353;
int pw[N];


void result() 
{
    pw[0] = 1;
    for (int i = 1; i < N; i++) 
    {
        pw[i] = (2LL * pw[i - 1]) % mod;
    }
}

void solve() 
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);

    for (int i=0; i<n; i++) 
    {
        cin >> a[i];
    }
    for (int i=0; i<n; i++) 
    {
        cin >> b[i];
    }

    int x = 0, y = 0; 
    for (int i = 0; i < n; ++i) 
    {
        if (a[i] > a[x]) x = i;
        if (b[i] > b[y]) y = i;

        int res;
        if (a[x] > b[y] || (a[x] == b[y] && b[i - x] > a[i - y])) 
        {
            res = (pw[a[x]] + pw[b[i - x]]) % mod;
        } 
        else {
            res = (pw[a[i - y]] + pw[b[y]]) % mod;
        }

        cout << res << " ";
    }
    cout<<endl;
}


int main()
{
    Raju;
    result();
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
  return 0;
}
                                                                //ALHAMDULILLAH