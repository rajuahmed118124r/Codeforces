                                                            // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : A. Two Substrings
Problem link : https://codeforces.com/problemset/problem/550/A
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
    char s[100005], *p;
    cin>>s;
    if((p=strstr(s,"AB")) && (strstr(p+2,"BA")))
    {
        cout<<"YES"<<endl;
    }
    else if((p=strstr(s,"BA")) && (strstr(p+2,"AB")))
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
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