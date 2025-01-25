                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Seating in a Bus
Problem link : https://codeforces.com/contest/2000/problem/B
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
    cin>>n;
    vector<int>v(n);
    vector<bool>v1(n+1,false);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    v1[v[0]]=true;
    for(int i=1; i<n; i++)
    {
        bool left = (v[i]-1>=1 && v1[v[i]-1]==true);
        bool right = (v[i]+1<=n && v1[v[i]+1]==true);
        if(!left && !right)
        {
            no;
            return;
        }
        v1[v[i]]=true;
    }
    yes;
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