                                                            // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : C.Penchick and BBQ Buns
Problem link : https://codeforces.com/contest/2031/problem/C
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
    int n;
    cin >> n;
    if (n % 2 == 0) 
    {
        for (int i = 1; i <= n; i += 2) 
        {
            cout << i << ' ' << i << ' ';
        }
        cout << '\n';
        return;
    }
    if (n > 26) 
    {
        int a = 0, b = 3;
        for (int i = 1; i <= n; i++) 
        {
            if (i == 1 || i == 10 || i == 26) 
            {
                cout << 1 << ' ';
            } 
            else if (i == 23 || i == 27)
            {
                cout << 2 << ' ';
            } 
            else {
                cout << b << ' ';
                a++;
                b += (a == 2);
                a %= 2;
            }
        }
    } 
    else {
        cout << -1 << '\n';
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