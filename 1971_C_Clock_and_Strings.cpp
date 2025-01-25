                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : C. Clock and Strings
Problem link : https://codeforces.com/contest/1971/problem/C
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


void solve() 
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int ck=0;
    if(a>b) 
    {
        swap(a,b);
    }
    if(c>d)
    {
        swap(c,d);
    } 
    if(a<c && b>c)
    {
        ck++;
    }
    if(a<d && b>d)
    {
        ck++;
    }

    if(ck==1)
    {
        yes;
        return;
    }
    no;
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