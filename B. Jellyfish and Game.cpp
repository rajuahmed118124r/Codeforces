                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Jellyfish and Game
Problem link : https://codeforces.com/contest/1875/problem/B
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
    ll n, m, k, sum1=0, sum2=0;
    cin>>n>>m>>k;
    vector<ll>v(n), v1(m);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    for(int i=0; i<m; i++)
    {
        cin>>v1[i];
    }
    sort(v1.begin(), v1.end());

    if(k%2==1)
    {
        if(v[0]<v1[m-1])
        {
            swap(v[0],v1[m-1]);
        }
        for(auto x:v)
        {
            sum1+=x;
        }
    }
    else{
        if(v[0]<v1[m-1])
        {
            swap(v[0],v1[m-1]);
        }
        sort(v.begin(), v.end());
        sort(v1.begin(), v1.end());
        if(v1[0]<v[n-1])
        {
            swap(v1[0],v[n-1]);
        }
        for(auto x:v)
        {
            sum1+=x;
        }
    }
    cout<<sum1<<endl;
    
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