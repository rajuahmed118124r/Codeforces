                                                            ///BISMILLAHIR RAHMANIR RAHIM
                                                            //============================
/*
Problem name : C. Simple Repetition
Problem link : https://codeforces.com/contest/2093/problem/C
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


bool isPrime(long long n) 
{
    if (n <= 1) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    
    for (long long i = 5; i * i <= n; i += 6) 
    {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}


void solve() 
{
    ll x, k;
    cin >> x >> k;
    bool rslt = isPrime(x);

    if (k == 1) 
    {
        if (rslt) 
        {
            cout << "YES" << '\n';
        } 
        else {
            cout << "NO" << '\n';
        }
    } 
    else {
        if (x == 1 && k == 2) 
        {
            cout << "YES" << '\n';
        } 
        else {
            cout << "NO" << '\n';
        }
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
                                                                //ALHAMDULILLAH