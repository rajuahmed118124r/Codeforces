                                                            // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : C. Fadi and LCM
Problem link : https://codeforces.com/problemset/problem/1285/C
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
    ll x, a, b, e;
    cin>>x;
    a=1, b=x;
    for(ll i=1; i*i<=x; i++)
    {
        if(x%i!=0)continue;
        e = x/i;
        if(__gcd(i,e)==1)
        {
            if(max(a,b)>max(i,e))
            {
                a=i, b=e;
            }
        }
    }
    cout<<a<<" "<<b<<endl;
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