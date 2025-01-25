                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : K. Indivisibility
Problem link : https://codeforces.com/contest/630/problem/K
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
    ll n, total;
    cin>>n;
    total = n - (n/2 + n/3 + n/5 + n/7) + (n/6 + n/10 + n/14 + n/15 + n/21 + n/35) - (n/30 +n/70 + n/42 + n/105) + n/210;
    cout<<total<<endl; 
}


int main()
{
    Raju;
    int t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }
return 0;
}


                                                                     ///ALHAMDULILLAH