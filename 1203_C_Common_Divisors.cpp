                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : C. Common Divisors
Problem link : https://codeforces.com/problemset/problem/1203/C
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
    ll n, count=0;
    cin>>n;
    vector<ll>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    ll gcd = v[0];

    for(ll i=1; i<n; i++)
    {
        gcd = __gcd(gcd, v[i]);
    }

    for(ll i=1; i*i<=gcd; i++)
    {
        if(gcd%i==0)
        {
            count+=2;
            if(i==gcd/i)
            {
                count--;
            }
        }
    }
    cout<<count<<endl;
}


int main()
{
    Raju;
    solve();
return 0;
}


                                                                     ///ALHAMDULILLAH