                                                            ///BISMILLAHIR RAHMANIR RAHIM
                                                            //============================
/*
Problem name : D. Tung Tung Sahur
Problem link : https://codeforces.com/contest/2094/problem/D
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

void solve()
{
    string p, s;
    cin >> p >> s;

    bool ok = true;
    int i = 0, j = 0;
    int a = p.size(), b = s.size();
    while (i < a && j < b) 
    {
        if (p[i] == s[j]) 
        {
            int cnt = 0;
            int pos = i;
            while (i < a && p[i] == p[pos]) i++, cnt++;
            pos = j;
            int cntb = 0;
            while (j < b && s[j] == s[pos]) j++, cntb++;
            if (cnt * 2 < cntb) 
            {
                ok = false;
                break;
            }
            if (cnt > cntb) 
            {
                ok = false;
                break;
            }
        } 
        else {
            ok = false;
            break;
        }
    }
    if (i < a) ok = false;
    while (j < b) 
    {
        if (s[j] != p.back()) 
        {
            ok = false;
            break;
        }
        j++;
    }
    cout << (ok ? "YES" : "NO") << '\n';
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