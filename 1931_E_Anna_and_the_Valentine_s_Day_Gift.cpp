                                                            // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : E. Anna and the Valentine's Day Gift
Problem link : https://codeforces.com/contest/1931/problem/E
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

int digit(int x)
{
    int cnt=0;
    while(x%10==0)
    {
        cnt++;
        x/=10;
    }
    return cnt;
}
void raju()
{
    ll n, m;
    cin>>n>>m;
    vector<int>v(n), zro;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    ll total=0;
    for(auto x: v)
    {
        string s;
        s = to_string(x);
        total+=s.size();
        zro.pb(digit(x));
    }

    sort(zro.rbegin(), zro.rend());
    for(int i=0; i<n; i+=2)
    {
        total-=zro[i];
    }
    if(total>m)
    {
        cout<<"Sasha"<<endl;
    }
    else{
        cout<<"Anna"<<endl;
    }
}

int main()
{
    Raju;
    int t;
    cin>>t;
    while(t--)
    {
        raju();
    }
  return 0;
}
                                                                //ٱلْحَمْدُ لِلَّٰهِ