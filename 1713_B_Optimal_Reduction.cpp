                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Optimal Reduction
Problem link : https://codeforces.com/problemset/problem/1713/B
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
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    int mx = max_element(v.begin(), v.end())- v.begin();
    //cout<<mx<<endl;
    for(int i=mx+1; i<n; i++)
    {
        if(v[i]>v[i-1])
        {
            no;
            return;
        }
    }
    for(int i=mx-1; i>=0; i--)
    {
        if(v[i]>v[i+1])
        {
            no;
            return;
        }
    }
    yes;
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