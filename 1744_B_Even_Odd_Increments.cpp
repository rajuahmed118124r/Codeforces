                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Even-Odd Increments
Problem link : https://codeforces.com/contest/1744/problem/B
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
    ll n, q;
    cin>>n>>q;
    vector<ll>v(n);
    ll sum =0, even=0, odd=0;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        if(v[i]&1)odd++;
        else even++;
        sum+=v[i];
    }

    while(q--)
    {
        ll a, b;
        cin>>a>>b;
        if((a==0) && (b&1)==0) sum+=even*b;
        else if((a==0) && (b&1))
        {
            sum+=even*b;
            odd+=even;
            even=0;
        }

        if((a==1) && (b&1)==0) sum+=odd*b;
        else if((a==1) && (b&1))
        {
            sum+=odd*b;
            even+=odd;
            odd=0;
        }
        cout<<sum<<endl;
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