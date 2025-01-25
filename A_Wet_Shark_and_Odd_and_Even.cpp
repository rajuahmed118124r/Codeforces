                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Wet Shark and Odd and Even
Problem link : https://codeforces.com/problemset/problem/621/A
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
    ll n, sum=0;;
    cin>>n;
    vector<ll>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    sort(v.begin(), v.end());
    if(sum%2==0)
    {
        cout<<sum<<endl;
    }
    else{
        for(int i=0; i<n; i++)
        {
            ll x = (sum-v[i]);
            if(x%2==0)
            {
                cout<<x<<endl;
                break;
            }
        }
    }
}


int main()
{
    Raju;
    solve();
return 0;
}


                                                                     ///ALHAMDULILLAH