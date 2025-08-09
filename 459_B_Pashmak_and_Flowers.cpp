                                                            // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : B. Pashmak and Flowers
Problem link : https://codeforces.com/problemset/problem/459/B
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
    if (!(cin >> n)) return;
    long long min_b = LLONG_MAX;
    long long max_b = LLONG_MIN;
    long long count_min = 0, count_max = 0;
    
    for (int i = 0; i < n; ++i) 
    {
        long long x;
        cin >> x;
        if (x < min_b) 
        {
            min_b = x;
            count_min = 1;
        } 
        else if (x == min_b) 
        {
            ++count_min;
        }
        
        if (x > max_b) 
        {
            max_b = x;
            count_max = 1;
        } 
        else if (x == max_b) 
        {
            ++count_max;
        }
    }
    
    long long max_diff = max_b - min_b;
    long long ways;
    if (max_diff == 0) 
    {
        ways = 1LL * n * (n - 1) / 2;
    } 
    else {
        ways = count_min * count_max;
    }
    
    cout << max_diff << " " << ways << "\n";
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