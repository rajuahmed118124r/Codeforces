                                                            ///BISMILLAHIR RAHMANIR RAHIM
                                                           ///============================
/*
Problem name : D. Absolute Sorting
Problem link : https://codeforces.com/contest/1772/problem/D
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
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    int l=0, r = INT_MAX;
    for(int i=0; i<n-1; i++)
    {
        if(v[i]==v[i+1])continue;
        else if(v[i]<v[i+1])
        {
            r = min(r, (v[i]+v[i+1])/2);
        }
        else{
            l = max(l,(v[i]+v[i+1]+1)/2);
        }
    }
    if(l<=r)
    {
        cout<<l<<endl;
    }
    else cout<<-1<<endl;
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





















