                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Required Remainder
Problem link : https://codeforces.com/problemset/problem/1374/A
Platform     : Codeforces
Author       : Md. Raju Miah
*/
#include<bits/stdc++.h>
using namespace std;


#define Raju ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define pb push_back
#define all(x) (x).begin(), (x).end()


void solve()
{
    ll x,y,n,ans1, ans;
    cin>>x>>y>>n;
    if(x!=0)
    {
        ans1 = (n-y)/x;
        ans = ans1*x + y;
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