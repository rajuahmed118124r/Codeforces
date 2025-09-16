                                                            // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : C. Non-Descending Arrays
Problem link : https://codeforces.com/contest/2144/problem/C
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
const int MOD = 998244353;

void raju()
{
    int n; cin>>n;
    vector<int>a(n+1), b(n+1);
    for(int i=1;i<=n;i++) 
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++) 
    {
        cin>>b[i];
    }

    ll dp0 = 1, dp1 = 1; 
    for(int i=2;i<=n;i++)
    {
        ll ndp0 = 0, ndp1 = 0;
        if (a[i-1] <= a[i] && b[i-1] <= b[i])
        {
            ndp0 = (ndp0 + dp0) % MOD; 
        }
        if (b[i-1] <= a[i] && a[i-1] <= b[i])
        {
            ndp0 = (ndp0 + dp1) % MOD;
        }
        if (a[i-1] <= b[i] && b[i-1] <= a[i]) 
        {
            ndp1 = (ndp1 + dp0) % MOD; 
        }
        if (b[i-1] <= b[i] && a[i-1] <= a[i]) 
        {
            ndp1 = (ndp1 + dp1) % MOD; 
        }

        dp0 = ndp0;
        dp1 = ndp1;
    }
    cout<<((dp0 + dp1)%MOD)<<endl;
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