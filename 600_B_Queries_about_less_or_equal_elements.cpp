                                                            // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : B. Queries about less or equal elements
Problem link : https://codeforces.com/contest/600/problem/B
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
    int n,m;
    cin>>n>>m;
    vector<int>v(n), v1(m);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    for(int i=0; i<m; i++)
    {
        cin>>v1[i];
    }
    sort(v.begin(), v.end());

    for(int i=0; i<m; i++)
    {
        cout <<upper_bound(v.begin(), v.end(), v1[i]) - v.begin() << " \n"[i == m-1];
    }

}

int main()
{
    Raju;
    int t=1;
    // cin>>t;
    while(t--)
    {
        hehe();
    }
  return 0;
}
                                                                //ٱلْحَمْدُ لِلَّٰهِ