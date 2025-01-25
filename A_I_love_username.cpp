                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. I_love_%username%
Problem link : https://codeforces.com/problemset/problem/155/A
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
    ll n,count=0;
    cin>>n;
    vector<ll>v(n), v1;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    int mx=v[0];
    int mn=v[0];
    for(int i=0; i<n; i++)
    {
        if(v[i]>mx)
        {
            mx = v[i];
            count++;
        }
        if(v[i]<mn)
        {
            mn = v[i];
            count++;
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