                                                            ///BISMILLAHIR RAHMANIR RAHIM
                                                            //============================
/*
Problem name : D. For Wizards, the Exam Is Easy, but I Couldn't Handle It
Problem link : https://codeforces.com/contest/2072/problem/D
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
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> v[i];
    }

    int l = 0, r = 0, mn = 0;
    for (int i = 0; i < n; i++) 
    {
        int cnt1 = 0, cnt2 = 0, rslt;
        for (int j = i + 1; j < n; j++) 
        {
            if (v[j] > v[i]) 
            {
                cnt1++;
            }
            else if (v[j] < v[i])
            {
                cnt2++;
            } 

            rslt = cnt1 - cnt2;
            if (rslt < mn) 
            {
                mn = rslt;
                l = i;
                r = j;
            }
        }
    }
    cout << l + 1 << " " << r + 1 <<endl;
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