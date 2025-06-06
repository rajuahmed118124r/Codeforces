                                                            ///BISMILLAHIR RAHMANIR RAHIM
                                                            //============================
/*
Problem name : E. Interesting Ratio
Problem link : https://codeforces.com/contest/2091/problem/E
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

const int N = 1e7 + 5;
bool is_prime[N];

void sieve() 
{
    fill(is_prime, is_prime + N, true);
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i * i < N; i++) 
    {
        if (is_prime[i]) 
        {
            for (int j = i * i; j < N; j += i) 
            {
                is_prime[j] = false;
            }
        }
    }
}


void solve() 
{
    int n;
    cin >> n;
    int cnt = 0;

    for(int p=2; p<=n; p++) 
    {
        if (!is_prime[p])continue;
        cnt+=(n/p);
    }

    cout<<cnt<<endl;
}

int main()
{
    Raju;
    sieve();
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
  return 0;
}
                                                                //ALHAMDULILLAH