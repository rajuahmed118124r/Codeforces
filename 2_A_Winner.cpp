                                                            // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : A. Winner
Problem link : https://codeforces.com/contest/2/problem/A
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

void raju()
{
    int n;
    cin>>n;
    vector<pair<string, int>>v;
    map<string,int>mp;
    for(int i=0; i<n; i++)
    {
        string name;
        int scre;
        cin>>name>>scre;
        v.pb({name, scre});
        mp[name]+=scre;
    }

    int mx = -1000000000;
    for(auto &x:mp)
    {
        if(x.second>mx)
        {
            mx=x.second;
        }
    }
    map<string, int>mp1;
    for(auto &r:v)
    {
        mp1[r.first]+=r.second;
        if(mp1[r.first]>=mx && mp[r.first]==mx)
        {
            cout<<r.first<<endl;
            return;
        }
    }
}

int main()
{
    Raju;
    int t=1;
    // cin>>t;
    while(t--)
    {
        raju();
    }
  return 0;
}
                                                                //ٱلْحَمْدُ لِلَّٰهِ

