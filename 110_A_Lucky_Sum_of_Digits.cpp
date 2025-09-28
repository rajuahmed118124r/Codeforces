                                                            // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : C. Lucky Sum of Digits
Problem link : https://codeforces.com/contest/110/problem/C
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
    cin>>n;
    string s="";
    while(n>0)
    {
        if(n%7)
        {
            s+="4";
            n-=4;
        }
        else{
            s+="7";
            n-=7;
        }
    }
    if(!n)
    {
        cout<<s<<endl;
        return;
    }
    cout<<-1<<endl;
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