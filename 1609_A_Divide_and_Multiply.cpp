                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Divide and Multiply
Problem link : https://codeforces.com/problemset/problem/1609/A
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
    vector<ll>v(n), ans;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    //ll mx = *max_element(v.begin(), v.end());
    ll sum=0, cnt=0;

    for(ll i=0; i<n; i++)
    {
        ll x = v[i];
        if(x%2!=0)
        {
            ans.pb(x);
        }
        while(x%2==0)
        {
            x/=2;
            cnt++;
            if(x%2!=0)
            {
                ans.pb(x);
            }
        } 
    }
    ll mx = *max_element(ans.begin(), ans.end());
    for(int i=0; i<ans.size(); i++)
    {
        sum+=ans[i];
    }
    sum-=mx;
    ll pw= pow(2,cnt)*mx;
    cout<<sum+pw<<endl;

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