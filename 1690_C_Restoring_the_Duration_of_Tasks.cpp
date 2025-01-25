                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : C. Restoring the Duration of Tasks
Problem link : https://codeforces.com/contest/1690/problem/C
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
    int n;
    cin>>n;
    vector<int>v(n), v1(n), v2;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>v1[i];
    }
    v2.pb(v1[0]-v[0]);
    for(int i=1; i<n; i++)
    {
        if(v[i]>v1[i-1])
        {
            v2.pb(v1[i]-v[i]);
        }
        else{
            v2.pb(v1[i]-v1[i-1]);
        }
    }
    for(auto x: v2)
    {
        cout<<x<<" ";
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


                                                                     ///ALHAMDULILLAH;
