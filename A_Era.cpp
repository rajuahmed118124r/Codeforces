                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Era
Problem link : https://codeforces.com/problemset/problem/1604/A
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
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(int i=1; i<=n; i++)
    {
        cin>>v[i];
    }

    ll ans=v[1]-1;
    ll indx = ans;

    for(int i=2; i<=n; i++)
    {
        if(indx + i< v[i])
        {
            ll x = v[i] - (indx +i);
            indx+=x;
            ans+=x;
        }
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