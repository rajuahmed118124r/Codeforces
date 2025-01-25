                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : C. Quests
Problem link : https://codeforces.com/problemset/problem/1914/C
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


void solve()
{
    int n, k;
    cin>>n>>k;
    vector<int>v(n), v1(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>v1[i];
    }

    vector<int>dp(n+10);
    //base case
    dp[0] = v1[0];
    // iterative case
    for(int i=1; i<n; i++)
    {
        dp[i] = max(dp[i-1], v1[i]);
    }
    int total = 0, ans = 0;
    for(int i=0; i<min(n,k); i++)
    {
        total+=v[i];
        int level = k - (i+1);
        int ans1 = total + dp[i]*level;
        ans = max(ans, ans1);
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
        solve();
    }
return 0;
}


                                                                     ///ALHAMDULILLAH