                                                            ///BISMILLAHIR RAHMANIR RAHIM
                                                            //============================
/*
Problem name : D. Skibidi Table
Problem link : https://codeforces.com/contest/2093/problem/D
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

ll table[2][2] = {{1, 4}, {3, 2}};

ll rslt(int n, ll x, ll y) 
{
    if(n == 1) {
        return table[x - 1][y - 1];  
    }
    ll half = 1LL << (n - 1);       
    ll sz = half * half;      
    
    if(x <= half && y <= half) 
    {
        return rslt(n - 1, x, y);
    } 
    else if(x > half && y > half) 
    {
        return sz + rslt(n - 1, x - half, y - half);
    } 
    else if(x > half && y <= half) 
    {
        return 2 * sz + rslt(n - 1, x - half, y);
    } 
    else { 
        return 3 * sz + rslt(n - 1, x, y - half);
    }
}

pair<ll, ll> Coord(int n, ll d) 
{
    if(n == 1) 
    {
        if(d == 1) return {1, 1};
        if(d == 2) return {2, 2};
        if(d == 3) return {2, 1};
        if(d == 4) return {1, 2};
    }

    ll hlf = 1LL << (n - 1);  
    ll sz = hlf * hlf;
    
    if(d <= sz) 
    {
        return Coord(n - 1, d);
    } 
    else if(d <= 2 * sz) 
    {
        auto coord = Coord(n - 1, d - sz);
        return {coord.first + hlf, coord.second + hlf};
    } 
    else if(d <= 3 * sz) 
    {
        auto coord = Coord(n - 1, d - 2 * sz);
        return {coord.first + hlf, coord.second};
    } 
    else {
        auto coord = Coord(n - 1, d - 3 * sz);
        return {coord.first, coord.second + hlf};
    }
}

void solve()
{
    int n, q;
    cin >> n >> q;
    
    while(q--) 
    {
        string q;
        cin >> q;
        
        if(q == "->") 
        {
            ll x, y;
            cin >> x >> y;
            cout << rslt(n, x, y) << "\n";
        } 
        else if(q == "<-") 
        {
            ll d;
            cin >> d;
            auto coord = Coord(n, d);
            cout << coord.first << " " << coord.second << "\n";
        }
    }
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


