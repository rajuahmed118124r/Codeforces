                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Progressive Square
Problem link : https://codeforces.com/contest/1955/problem/B
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
    int n, c, d;
    cin>>n>>c>>d;
    vector<int>v(n*n), v1(n*n);
    for(int i=0; i<n*n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(), v.end());

    for(int i=0; i<n*n; i++)
    {
        v1[i] = v[0] + i/n * c + i%n *d;
    }
    sort(v1.begin(), v1.end());
    
    if(v==v1)
    {
        yes;
        return;
    }
    no;
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