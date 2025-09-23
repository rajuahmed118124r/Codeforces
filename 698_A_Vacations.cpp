                                                            // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : A. Vacations
Problem link : https://codeforces.com/contest/698/problem/A
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
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    int cnt =0;
    for(int i=0; i<n; i++)
    {
        if(v[i]==0)
        {
            cnt++;
            continue;
        } 
        if(v[i]==v[i-1] && i-1>=0 && v[i]!=3)
        {
            cnt++;
            v[i]=0;
        } 
        if(v[i]==3 && v[i-1]==1 && i-1>=0)
        {
            v[i]=2;
        }
        if(v[i]==3 && v[i-1]==2 && i-1>=0)
        {
            v[i]=1;
        }
    }
    cout<<cnt<<endl;
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