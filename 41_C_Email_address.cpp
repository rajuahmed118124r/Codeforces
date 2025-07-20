                                                            // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : C. Email address
Problem link : https://codeforces.com/contest/41/problem/C 
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
    string s;
    cin>>s;
    int n = s.size(), att=0;
    for(int i=1; i<n; i++)
    {
        if(s[i]=='a' && s[i+1]=='t' && i<n-2 && att==0)
        {
            att=1;
            s[i]='@';
            s[i+1]='0';
        }
        else if(s[i]=='d' && s[i+1]=='o' && s[i+2]=='t' && i<n-3)
        {
            s[i]='.';
            s[i+1]='0';
            s[i+2]='0';
        }
    }
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]!='0')
        {
            cout<<s[i];
        }
    }
    cout<<endl;
}

int main()
{
    Raju;
    int t=1;
    // cin>>t;
    while(t--)
    {
        hehe();
    }
  return 0;
}
                                                                //ٱلْحَمْدُ لِلَّٰهِ