                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Treasure Chest
Problem link : https://codeforces.com/contest/1895/problem/A
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
    int x,y,k,ans=0;
    cin>>x>>y>>k;
    if(x>=y)
    {
        cout<<x<<endl; 
        return;
    }
    ans=x;
    if(y-x<=k)
    {
        ans+=(y-x);
    }
    else
    {
        ans+=k;
        int a=y-ans;
        ans+=(a*2);
    }
    cout << ans << endl;
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