                                                            // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : 
Problem link : https://codeforces.com/problemset/problem/2121/D
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
    int n;
    cin>>n;
    vector<int>a(n), b(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    } 
    for(int i=0; i<n; i++)
    {
        cin>>b[i];
    } 
    vector<pair<int, int>>v;
    // sort(a.begin(), a.end());
    // sort(b.begin(), b.end());
    while(1)
    {
        bool t=false;
        for(int i=0; i<n-1; i++)
        {
            if(a[i]>a[i+1])
            {
                v.push_back({1, i+1});
                swap(a[i],a[i+1]);
                t = true;
            }
        }
        if(!t)break;
    }
    while(1)
    {
        bool t=false;
        for(int i=0; i<n-1; i++)
        {
            if(b[i]>b[i+1])
            {
                v.push_back({2, i+1});
                swap(b[i],b[i+1]);
                t = true;
            }
        }
        if(!t)break;
    }

   
    while(1)
    {
        bool t=false;
        for(int i=0; i<n; i++)
        {
            if(a[i]>b[i])
            {
                v.push_back({3, i+1});
                swap(a[i],b[i]);
                t = true;
            }
        }
        if(!t)break;
    }

    cout<<v.size()<<endl;
    for(auto x:v)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
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