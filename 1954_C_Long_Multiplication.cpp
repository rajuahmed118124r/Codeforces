                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : C. Long Multiplication
Problem link : https://codeforces.com/contest/1954/problem/C
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
    string x, y;
    cin>>x>>y;
    ll n = x.size();
    bool ok = false;

    for(int i=0; i<n; i++)
    {
        ll a = x[i]-48;
        ll b = y[i]-48;
        if(a==b)continue;
        if(!ok)
        {
            if(a<b)
            {
                swap(x[i], y[i]);
            }
            ok = true;
        }
        else{
            if(a>b)
            {
                swap(x[i], y[i]);
            }
        }
    }
    cout<<x<<"\n"<<y<<endl;
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