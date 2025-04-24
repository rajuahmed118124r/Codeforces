                                                            ///BISMILLAHIR RAHMANIR RAHIM
                                                            //============================
/*
Problem name : C. Median Splits
Problem link : https://codeforces.com/contest/2103/problem/C
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

int n, k;
bool f(vector<int>a)
{
    int p = -1;
    int cn = 0;
    for (int i = 0 ; i < n; i++)
    {
        if (a[i] <= k) 
        {
            cn++;
            if (cn + cn >= (i + 1)) 
            {
                p = i + 1;
                break;
            }
        }
    }
    if (p == -1) 
    {
        return false;
    }
 
    if (a[p] <= k && p < n) 
    {
        return true;
    }
    p++;
    if (cn + cn < p) 
    {
        p--;
    }
 
    cn = 0;
    for (int i = n - 1; i >= p; i--)
    {
        if (a[i] <= k) 
        {
            cn++;
            if (cn + cn >= (n - i)) 
            {
                return true;
            }
        }
    }
    cn = 0;
    int sz = 0;
    for (int i = p; i < n; i++) 
    {
        sz++;
        if (a[i] <= k) 
        {
            cn++;
            if (cn + cn >= sz) 
            {
                return true;
            }
        }
    }
    return false;
}
 
void solve()
{
    cin >> n >> k;
    vector<int>a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (f(a)) 
    {
        cout << "YES\n";
        return;
    }

    reverse(all(a));
    if (f(a)) 
    {
        cout << "YES\n"; 
        return;
    }
    cout << "NO\n";
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