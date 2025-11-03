                                                            // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : B. Vanya and Lanterns
Problem link : https://codeforces.com/problemset/problem/492/B
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
    int n,l;
    cin>>n>>l;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(), v.end());

    double start = v[0]-0;
    double lst = l - v[n-1];

    double mx=0.0, md;
    for(int i=0; i<n-1; i++)
    {
        md = (v[i+1]-v[i])/2.0;
        mx = max(mx, md);
    }
    double ans = max(max(start,lst),mx);
    // cout<<ans<<endl;
    printf("%.10f",ans);
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