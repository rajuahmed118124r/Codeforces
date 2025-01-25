                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Symmetric Encoding
Problem link : https://codeforces.com/contest/1974/problem/B
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


string abc(string s) 
{
    string r = "";
    for (char c : s) 
    {
        if (find(r.begin(), r.end(), c) == r.end()) 
        {
            r += c;
        }
    }
    sort(r.begin(), r.end());
    string abcd = "";
    for (char c : s) 
    {
        int f = find(r.begin(), r.end(), c) - r.begin();
        abcd += r[r.length() - 1 - f];
    }
    return abcd;
}
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    cout<<abc(s)<<endl;
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