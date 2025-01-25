                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Polycarp and Coins
Problem link : https://codeforces.com/problemset/problem/1551/A
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
    int n,ans, ans1;
    cin>>n;
    int r = n/3;
    ans = r;
    ans1 = r;
    if(n%3==1)
    {
        ans++;
    }
    else if(n%3==2)
    {
        ans1++;
    }
    cout<<ans<<" "<<ans1<<endl;

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