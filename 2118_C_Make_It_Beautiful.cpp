                                                            // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : C. Make It Beautiful
Problem link : https://codeforces.com/problemset/problem/2118/C
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
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    ll cnt=0;
    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
    }
    for(ll bit=0; bit<=60; bit++)
    {
        ll has =0, need =0;
        for(int i=0; i<n; i++)
        {
            if(v[i]&(1LL<<bit))
            {
                has++;
            }
            else{
                need++;
            }
        }
        ll value = (1LL<<bit);
        ll mn = min(k/value, need);
        k-=(1LL<<bit)*mn;
        cnt+=(has+mn);
    }
    cout<<cnt<<endl;
}

int main()
{
    Raju;
    int t;
    cin>>t;
    while(t--)
    {
        hehe();
    }
  return 0;
}
                                                                //ٱلْحَمْدُ لِلَّٰهِ