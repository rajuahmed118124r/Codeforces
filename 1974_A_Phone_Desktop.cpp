                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Phone Desktop
Problem link : https://codeforces.com/contest/1974/problem/A
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
    long long x, y;
    cin >> x >> y;

    if (y == 0) 
    {
        cout << ceil(static_cast<float>(x) / 15) << endl;
        return ;
    }

    long long c1 = ceil(static_cast<float>(y) / 2);
    long long c2 = c1 * 15 - y * 4;

    if (x > c2) 
    {
        x -= c2;
        long long c3 = ceil(static_cast<float>(x) / 15);
        cout << c3 + c1 << endl;
    } 
    else {
        cout << c1 << endl;
    }
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