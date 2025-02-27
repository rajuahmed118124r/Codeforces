                                                            ///BISMILLAHIR RAHMANIR RAHIM
                                                            //============================
/*
Problem name : C. Creating Keys for StORages Has Become My Main Skill
Problem link : https://codeforces.com/contest/2072/problem/C
Platform     : Codeforces
Author       : Md. Raju Miah
*/
#include<bits/stdc++.h>
using namespace std;
#define Raju ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define pb push_back
#define zero cout<<0<<endl
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
    unsigned ll x;
    cin >> n >> x;

    ll op = 0; 
    vector<unsigned ll> dis;
    for (ll i = 0; i < n + 1; i++) 
    {
        if (i != 0) 
        {
            unsigned ll mx = i - 1;
            ll p = 31 - __builtin_clz(mx); 
            unsigned ll bx;
            if (i != (1u << p)) 
            {
                bx = (1u << (p + 1)) - 1;
            }
            else {
                bx = (1u << p) - 1;
            }

            if ((bx & (~x)) != 0) continue; 
            ll proyojn;
            if (bx != x) 
            {
                proyojn = i + 1;
            } 
            else {
                proyojn = i; 
            }

            if (proyojn <= n) 
            {
                op = i;
            }
        } 
        else op = 0; 
    }

    if (op == 0) 
    {
        dis.push_back(x);
    } 
    else {
        for (ll i = 0; i < op; i++) 
        {
            dis.push_back(i);
        }
        unsigned ll mx = op - 1;
        ll p = 31 - __builtin_clz(mx); 
        unsigned ll bx;
        if (op == (1u << p))
        {
            bx = (1u << p) - 1; 
        }  
        else {
            bx = (1u << (p + 1)) - 1;
        }
        if (bx != x) 
        {
            unsigned ll extra = x & (~bx);
            dis.push_back(extra);
        }
    }

    ll d = dis.size();
    vector<unsigned ll> ans;
    for (auto num : dis) ans.push_back(num);

    unsigned ll fil;
    if (op > 0) 
    {
        fil = 0u;
    } 
    else {
        fil = x;
    }

    while (ans.size() < (size_t)n) 
    {
        ans.push_back(fil);
    }
    for(ll i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
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
                                                                //ALHAMDULILLAH