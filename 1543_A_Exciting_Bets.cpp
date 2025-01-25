                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Exciting Bets
Problem link : https://codeforces.com/problemset/problem/1543/A
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
    ll a,b;
    cin>>a>>b;
    if(a==b)
    {
        cout<<0<<" "<<0<<endl;
    }
    else{
        ll x,y, diff;
        diff = abs(a-b);
        x = a%diff;
        y = b%diff;
        if(x==y)
        {
            cout<<diff<<" "<<min(x, diff-x)<<endl;
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


                                                                     ///ALHAMDULILLAH