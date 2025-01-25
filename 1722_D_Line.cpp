                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : D. Line
Problem link : https://codeforces.com/problemset/problem/1722/D
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
    string s;
    cin>>s;
    vector<ll>v;
    vector<ll>ans(n+1);
    ll sum=0,mn=0;
    for(ll i=0;i<n;i++)
    {
        ll L=i;
        ll R=n-1-i;
        if(s[i]=='L')
        {
            if(R>L)
            {
                mn++;
                sum+=R;
                v.push_back(R-L);
            }
            else
            {
                sum+=L;
            }
        }
        else
        {
            if(L>R)
            {
                mn++;
                sum+=L;
                v.push_back(L-R);
            }
            else
            {
                sum+=R;
            }
        }
    }
    for(ll i=mn;i<=n;i++)
    {
        ans[i]=sum;
    }
    sort(v.begin(),v.end(),greater<ll>());
    for(ll i=mn-1;i>=1;i--)
    {
        sum-=v.back();
        v.pop_back();
        ans[i]=sum;
    }
    for(ll i=1;i<=n;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
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