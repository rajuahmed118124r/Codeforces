
                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Problem Generator
Problem link : https://codeforces.com/contest/1980/problem/A
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

int needed(int m, int n, const string& a) 
{
    unordered_map<char, int> mp;
    for (char c : a) 
    {
        mp[c]++;
    }
    
    unordered_map<char, int> rm;
    for (char x = 'A'; x <= 'G'; x++) 
    {
        rm[x] = m;
    }
    
    int need = 0;
    for (char x = 'A'; x <= 'G'; x++) 
    {
        if (mp[x] < rm[x]) 
        {
            need += rm[x] - mp[x];
        }
    }
    
    return need;
}

void solve()
{
    int n, m;
    string s;
    cin>>n>>m>>s;
    cout<<(needed(m, n, s))<<endl;
    
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