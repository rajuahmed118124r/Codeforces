                                                            // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : B. Orac and Models
Problem link : https://codeforces.com/problemset/problem/1350/B
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
    ll n;
    cin>>n;
    vector<int>v(n+1);
    for(int i=1; i<=n; i++)
    {
        cin>>v[i];
    }

    vector<int>dp(n+1,1);

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j*j<=i; j++)
        {
            if(i%j==0)
            {
                int d1 = j;
                int d2 = i/j;
                if(d1<i && v[d1]<v[i])
                {
                    dp[i] = max(dp[i], dp[d1]+1);
                }
                if(d2<i && d1!=d2 && v[d2]<v[i])
                {
                    dp[i] = max(dp[i], dp[d2]+1);
                }
            }
        }
    }
    cout<<*max_element(dp.begin(), dp.end())<<endl;
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