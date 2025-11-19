                                                            // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : B. Worms
Problem link : https://codeforces.com/problemset/problem/474/B
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
    int n,m;
    cin>>n;
    vector<int>v(n), pre(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        if(i==0)
        {
            pre[0]=v[0];
        }
        else{
            pre[i] = pre[i-1]+v[i];
        }
    }
    cin>>m;
    vector<int>q(m);
    for(int i=0; i<m; i++)
    {
        cin>>q[i];
    }
    
    for(auto x:q)
    {
        int cnt = lower_bound(pre.begin(), pre.end(),x)-pre.begin();
        cout<<cnt+1<<endl;
    }

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