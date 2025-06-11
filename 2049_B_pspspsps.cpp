                                                            // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : B. pspspsps
Problem link : https://codeforces.com/contest/2049/problem/B
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

bool is_all_same(const string& s, char ch) 
{
    for (char c : s) 
    {
        if (c != ch) return false;
    }
    return true;
}

void hehe()
{
    int n;
    string s;
    cin >> n >> s;

    if (s[0] == 's') s[0] = '.';
    if (s[n - 1] == 'p') s[n - 1] = '.';

    string hi;
    for (char c : s) 
    {
        if (c != '.') hi += c;
    }

    if (hi.empty() || is_all_same(hi, 'p') || is_all_same(hi, 's')) 
    {
        cout << "YES\n";
    } 
    else {
        cout << "NO\n";
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



