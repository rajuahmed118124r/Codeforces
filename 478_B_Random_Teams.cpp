                                                            // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : B. Random Teams
Problem link : https://codeforces.com/contest/478/problem/B
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
    ll n,m, k_mx, k_mn, a,b;
    cin>>n>>m;
    k_mx = ((n-m+1)*(n-m))/2;
    a = n/m;
    b = n%m;
    k_mn = ((m-b)*a*(a-1))/2 + (b* a*(a+1))/2;
    cout<<k_mn<<" "<<k_mx<<endl;  
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