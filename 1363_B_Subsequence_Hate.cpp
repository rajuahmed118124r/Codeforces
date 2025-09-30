                                                            // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : B. Subsequence Hate
Problem link : https://codeforces.com/problemset/problem/1363/B 
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
    string s;
    cin>>s;
    int n= s.size(); 
    int num_zeros = count(s.begin(), s.end(), '0');
    int num_ones = n - num_zeros;

    int done_zeros = 0, done_ones = 0;
    int ans = min(num_zeros, num_ones); 

    for (int i = 0; i < n; i++) 
    {
        if (s[i] == '0') done_zeros++;
        else done_ones++;

        int cost1 = done_zeros + (num_ones - done_ones);
        int cost2 = done_ones + (num_zeros - done_zeros);

        ans = min({ans, cost1, cost2});
    }
    cout<<ans<<endl;
}

int main()
{
    Raju;
    int t;
    cin>>t;
    while(t--)
    {
        raju();
    }
  return 0;
}
                                                                //ٱلْحَمْدُ لِلَّٰهِ