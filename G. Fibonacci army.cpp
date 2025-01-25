                                                            ///BISMILLAHIR RAHMANIR RAHIM
                                                           ///============================
/*
Problem name : G. Fibonacci army
Problem link : https://codeforces.com/contest/72/problem/G
Platform     : Codeforces
Author       : Md. Raju Miah
*/
#include<bits/stdc++.h>
using namespace std;

#define Raju ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define pb push_back

ll const N=101;
ll dp[N];

ll fibo(int n)
{
    //1. base case
    if(n<=2)
    {
        return 1;
    }
    //2. check if current state is already solved
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    //3. recursive equation from the smaller sub-problems
    ll ans = fibo(n-1) + fibo(n-2);
    dp[n] = ans;
    return ans;
}


int main()
{
    Raju;
    int n;
    cin>>n;

    // Initialize dp array with -1
    //memset(dp, -1, sizeof(dp));

    for(int i=1; i<=n; i++)
    {
        dp[i] = -1;
    }
    cout<<fibo(n)<<"\n";
    return 0;
}