                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Increase/Decrease/Copy
Problem link : https://codeforces.com/contest/1976/problem/B
Platform     : Codeforces
Author       : Md. Raju Miah
*/
#include<bits/stdc++.h>
using namespace std;


#define Raju ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define pb push_back
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define all(x) (x).begin(), (x).end()


int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
const int N = 1e3;
char maze[N][N];
int visited[N][N];


void solve()
{
    ll n;
    cin>>n;
    vector<ll>v(n), b(n+1);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    for(int i=0; i<n+1; i++)
    {
        cin>>b[i];
    }
    
    ll ans = 0, lst = INT_MAX;
    for(int i=0; i<n; i++)
    {
        ll mn = min(v[i], b[i]);
        ll mx = max(v[i], b[i]);
        ans+=mx-mn;
        if(b[n]>=mn && b[n]<=mx)lst=0;
        else{
            lst = min({lst, abs(mn-b[n]), abs(mx-b[n])});
        }
    }
    cout<<ans+lst+1<<endl;
}


int main()
{
    Raju;
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
return 0;
}


                                                                     ///ALHAMDULILLAH