                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : E. Romantic Glasses
Problem link : https://codeforces.com/contest/1915/problem/E
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
    ll n;
    cin>>n;
    vector<ll>v(n);
    map<ll,ll>mp;
    mp[0]=1;
    ll sum=0;
    bool f = false;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        if(i%2==0)
        {
            v[i]*=(-1);
        }
        sum+=v[i];
        mp[sum]++;
        if(mp[sum]==2) 
        {
            f = true;
        }
    }
    if(f)
    {
        yes;
    }
    else 
    {
        no;
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