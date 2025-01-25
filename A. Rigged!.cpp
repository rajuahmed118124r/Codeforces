                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Rigged!
Problem link : https://codeforces.com/contest/1879/problem/A
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
    vector<pair<int, int>> v;
    for(int i=0; i<n; i++)
    {
        int a, b;
        cin>>a>>b;
        v.pb({a,b});
    }

    bool t = false;
    for(int i =1; i<n; i++)
    {
        if(v[0].first <= v[i].first && v[0].second <=v[i].second)
        {
            t = true;
            break;
        }
        t = false;
    }
    if(t)
    {
        cout<<-1<<endl;
    }
    else{
        
        cout<<v[0].first<<endl;
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