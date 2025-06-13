                                                            // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : C. Sakurako's Field Trip
Problem link : https://codeforces.com/problemset/problem/2033/C
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
    vector<int>v(n+1);
    for(int i=1; i<=n; i++)
    {
        cin>>v[i];
    }
    
    for(int i = n/2 -1; i>=1; i--)
    {
        if(v[i]==v[i+1] || v[n-i+1]==v[n-i])
        {
            swap(v[i], v[n-i+1]);
        }
    }


    int ans=0;
    for(int i=1; i<n; i++)
    {
        if(v[i]==v[i+1])
        {
            ans++;
        }
    }
    cout<<ans<<endl;
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