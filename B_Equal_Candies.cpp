                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Equal Candies
Problem link : https://codeforces.com/problemset/problem/1676/B
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
    ll n, sum=0;
    cin>>n;
    vector<ll>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    ll mn = *min_element(v.begin(), v.end());
    cout<<sum-n*mn<<endl; 
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