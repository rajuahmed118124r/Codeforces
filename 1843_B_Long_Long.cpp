                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Long Long
Problem link : https://codeforces.com/problemset/problem/1843/B
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
    ll n, count=0, sum=0;
    cin>>n;
    vector<ll>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        sum+=abs(v[i]);

    }

    bool f = false;
    for(int i=0; i<=n; i++)
    {
        if(f)
        {
            if(i==n || v[i]>0)
            {
                count++;
                f = false;
            }
        }
        else{
            if(v[i]<0)
            {
                f = true;
            }
        }
    }
    cout<<sum<<" "<<count<<endl;
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