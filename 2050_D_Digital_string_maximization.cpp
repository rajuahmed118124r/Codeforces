                                                            // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : D. Digital string maximization
Problem link : https://codeforces.com/contest/2050/problem/D
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
    int n= s.size();

    for(int i=1; i<n; i++)
    {
        for(int j=i; j>0 && s[j]>=s[j-1]+2; j--)
        {
            s[j]--;
            swap(s[j], s[j-1]);
        }
    }
    cout<<s<<endl;
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