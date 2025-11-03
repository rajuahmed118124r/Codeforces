                                                            // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : A. Cheap Travel
Problem link : https://codeforces.com/problemset/problem/466/A
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
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int cst1, cst2, cst3, ans=INT_MAX;
    cst1 = n*a;
    cst2 = ((n+m-1)/m)*b;
    cst3 = (n/m)*b + (n%m)*a;
    ans = min({cst1, cst2, cst3});
    cout<<ans<<endl;
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