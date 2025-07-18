                                                            // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : C. New Game
Problem link : https://codeforces.com/problemset/problem/2025/C
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
    int n,k;
    cin>>n>>k;
    vector<int>v(n), vec;
    map<int,int>mp;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        mp[v[i]]++;
    }

    for(auto x:mp)
    {
        vec.push_back(x.first);
    }

    int l=0, total=0, mx=0;
    for(int i=0; i<vec.size(); i++)
    {
        if(i>0 && vec[i]!=vec[i-1]+1)
        {
            l=i;
            total = 0;
        }
        total+=mp[vec[i]];

        while(i-l+1>k)
        {
            total-=mp[vec[l]];
            l++;
        }
        mx = max(mx, total);
    }
    cout<<mx<<endl;
}

int main()
{
    Raju;
    int t;
    cin>>t;
    while(t--)
    {
        hehe();
    }
  return 0;
}
                                                                //ٱلْحَمْدُ لِلَّٰهِ