                                                            // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : C. Basketball Exercise
Problem link : https://codeforces.com/contest/1195/problem/C
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

void hehe()
{
    int n;
    cin >> n;
    int a[n],b[n];
    for(int i=0 ;i<n ;i++)
    {
        cin >> a[i];
    }
    for(int i= 0; i<n ;i++)
    {
        cin >> b[i];
    }

    ll ans = 0,res = 0;
    for(int i=0;i<n;i++)
    {
        ll l = max(ans,res+a[i]);
        ll r = max(res,ans+b[i]);
        ans = l;
        res = r;
    }
    cout<<max(res,ans)<<endl;
}

int main()
{
    Raju;
    int t=1;
    // cin>>t;
    while(t--)
    {
        hehe();
    }
  return 0;
}
                                                                //ٱلْحَمْدُ لِلَّٰهِ