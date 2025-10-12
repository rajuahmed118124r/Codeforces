                                                            // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : A. Cut Ribbon 
Problem link : https://codeforces.com/problemset/problem/189/A
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
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    int ans=0;
    for(int i=0; i*a<=n; i++)
    {
        for(int j=0; (i*a+j*b)<=n; j++)
        {
            int k = (n-(i*a+j*b))/c;
            int l = i*a+j*b+k*c;
            if(l==n)
            {
                ans = max((i+j+k), ans);
            }
        }
    }
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