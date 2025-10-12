                                                            // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : B. Duff in Love
Problem link : https://codeforces.com/contest/588/problem/B
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

ll lovely(ll n)
{
    ll res = 1;
    for(ll i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            res*=i;
            while(n%i==0)
            {
                n/=i;
            }
        }
        
    }
    if(n>1)
    {
        res*=n;
    }
    return res;
}

void raju()
{
    ll n;
    cin>>n;
    cout<<lovely(n)<<endl;

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