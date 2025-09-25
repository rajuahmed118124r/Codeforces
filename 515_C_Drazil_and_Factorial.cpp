                                                            // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : C. Drazil and Factorial
Problem link : https://codeforces.com/problemset/problem/515/C
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
    string s, ans="";
    cin>>n>>s;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='0' || s[i]=='1')
        {
            continue;
        }
        if(s[i]=='4')
        {
            ans+="322";
        }
        else if(s[i]=='6')
        {
            ans+="53";
        }
        else if(s[i]=='8')
        {
            ans+="7222";
        }
        else if(s[i]=='9')
        {
            ans+="7332";
        }
        else{
            ans+=s[i];
        }
    }
    sort(ans.rbegin(), ans.rend());
    // reverse(ans.begin(), ans.end());
    cout<<ans<<endl;
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