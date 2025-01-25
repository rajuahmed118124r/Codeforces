                                                          ///BISMILLAHIR RAHMANIR RAHIM
                                                         ///============================
/*
Problem name : A. Increasing Sequence
Problem link : https://codeforces.com/contest/1882/problem/0
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
    vector<ll> v(n),v1(n);
    ll flag=1;
    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
    }
    for(ll i=0; i<n; i++)
    {
        if(v[i]==flag)
        {
            flag+=1;
        }
        if(i==n-1) break;
        flag++;
    }
    cout<<flag<<endl;

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
