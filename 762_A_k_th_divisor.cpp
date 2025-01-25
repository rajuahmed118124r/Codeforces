                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. k-th divisor
Problem link : https://codeforces.com/contest/762/problem/A
Platform     : Codeforces
Author       : Md. Raju Miah
*/
#include<bits/stdc++.h>
using namespace std;


#define Raju ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define pb push_back
#define all(x) (x).begin(), (x).end()

ll divisor(ll n, ll k)
{
    if(k>2*sqrt(n))
    {
        return -1;
    }

    vector<ll>v;
    for(ll i=1; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            v.pb(i);
            if(n/i !=i)
            {
                v.pb(n/i);
            }
        }
    }
    sort(v.begin(), v.end());
    if(k<=v.size())
    {
        return v[k-1];
    }
    else{
        return -1;
    }
}

void solve()
{
    ll n,k;
    cin>>n>>k;
    cout<<divisor(n,k)<<endl;
}


int main()
{
    Raju;
    solve();
return 0;
}


                                                                     ///ALHAMDULILLAH