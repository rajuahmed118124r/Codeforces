                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Three Brothers
Problem link : https://codeforces.com/contest/2010/problem/B
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
    int a,b;
    cin>>a>>b;
    vector<int>v={1,2,3};
    for(int i=0; i<3; i++)
    {
        if(v[i]!=a && v[i]!=b)
        {
            cout<<v[i]<<endl;
            return;
        }
    }
}


int main()
{
    Raju;
    int t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }
return 0;
}


                                                                     ///ALHAMDULILLAH