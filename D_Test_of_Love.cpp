                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : D. Test of Love
Problem link : https://codeforces.com/contest/1992/problem/D
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
    int n, m, k;
    cin>>n>>m>>k;
    string s;
    cin>>s;
    int curr = m-1, cnt=0, death=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='L')curr=m;
        else if(s[i]=='W' && curr<=0)cnt++;
        else if(s[i]=='C' && curr<=0)death++;
        curr--;
    }
    if(cnt>k)death++;
    if(death==0)yes;
    else no;
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