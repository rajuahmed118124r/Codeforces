                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Preparing for the Contest
Problem link : https://codeforces.com/contest/1914/problem/B
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
    int n, k, x;
    cin>>n>>k;
    for(int i=n; i>k+1; i--)
    {
        cout<<i<<" ";
    } 
    for(int i=1; i<=k+1; i++)
    {
        cout<<i<<" ";
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


                                                                     ///ALHAMDULILLAH
