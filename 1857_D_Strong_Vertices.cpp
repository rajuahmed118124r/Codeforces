                                                            // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : D. Strong Vertices
Problem link : https://codeforces.com/contest/1857/problem/D
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
    ll n;
   cin>>n;
   ll a[n],b[n];
 
   for(ll i=0;i<n;i++)cin>>a[i];
   for(ll i=0;i<n;i++)cin>>b[i];
   vector<ll>ans;
   for(ll i=0;i<n;i++)
   {
      ans.pb(a[i]-b[i]);
   }
   
   ll mx = *max_element(ans.begin(),ans.end());
   vector<ll>res;
 
   for(ll i = 0;i<n;i++)
   {
      if(ans[i]==mx)res.pb(i+1);
   }
 
   cout<<res.size()<<endl;
 
   for(ll i=0;i<res.size();i++)cout<<res[i]<<" ";cout<<endl;
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