
                                                            ///BISMILLAHIR RAHMANIR RAHIM
                                                            //============================
/*
Problem name : E. Min Max MEX
Problem link : https://codeforces.com/contest/2093/problem/E
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


bool rslt(int x, int k, const vector<int>& v) 
{
    if (x == 0) return true;

    int cnt = 0;
    vector<int> q(x, 0);
    int c1 = 0;

    for (int i = 0; i < (int)v.size(); i++) 
    {
        if (v[i] < x) 
        {
            if (q[v[i]] == 0) 
            {
                c1++;
            }
            q[v[i]]++;
        }

        if (c1 == x) 
        {
            cnt++;
            c1 = 0;
            for (int j = 0; j < x; j++) 
            {
                q[j] = 0;
            }
            if (cnt >= k) 
            {
                return true;
            }
        }
    }
    return false;
}

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> v[i];
    }

    int left = 0, right = n + 1;  

    while (left < right) 
    {
        int mid = (left + right) / 2;
        if (rslt(mid, k, v)) 
        {
            left = mid + 1;
        } 
        else {
            right = mid;
        }
    }
    cout << (left - 1) << "\n";
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