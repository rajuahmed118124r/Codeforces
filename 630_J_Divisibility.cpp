                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : J. Divisibility
Problem link : https://codeforces.com/problemset/problem/630/J
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

/*
bool check(ll x)
{
    for(ll i=2; i<=10; i++)
    {
        if(x%i!=0)
        {
            return false;
        }
    }
    return true;
}
*/

void solve()
{
    ll n;
    cin>>n;
    /*
    vector<ll>v;
    bool t = true;
    for(ll i=1; i<=n; i++)
    {
        if(check(i)==true)
        {
            v.pb(i);
        }
    }
    for(auto x: v)
    {
        cout<<x<<endl;
    }
    */
    cout<<(n/2520)<<endl;
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