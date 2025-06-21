                                                            // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : F. Trulimero Trulicina
Problem link : https://codeforces.com/contest/2094/problem/F
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
    int n, m, k;
    cin>>n>>m>>k;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if (j == m - 1) 
            {
                cout << (i * max(1, m % k) + j) % k + 1 << "\n";
            }
            else {
                cout << (i * max(1, m % k) + j) % k + 1 << " ";
            }
        }
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