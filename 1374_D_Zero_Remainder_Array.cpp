                                                            // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : D. Zero Remainder Array
Problem link : https://codeforces.com/problemset/problem/1374/D
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
    int n,k;
    cin>>n>>k;
    map<ll, ll>mp;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        int need =(k-x%k)%k;
        mp[need]++;
    }

    ll mx = 0;
    for(auto x:mp)
    {
        ll d = x.first;
        ll cnt = x.second;
        if(d==0)continue;
        ll mv = d+(cnt-1)*k;
        mx = max(mx,mv);
    }
    if(mx>0)
    {
        cout<<mx+1<<endl;
        return;
    }
    cout<<0<<endl;
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