                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Two Out of Three
Problem link : https://codeforces.com/contest/1894/problem/B
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
    vector<int>v(n), v1, v2;
    map<int, int>mp;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        mp[v[i]]++;
    }

    for(auto x: mp)
    {
        if(x.second>=2)
        {
            v1.pb(x.first);
        }
    }
    if(v1.size()<2)
    {
        cout<<-1<<endl;
    }
    else{
        bool ok1 = false, ok2 = false;
        for(auto x: v)
        {
            if(x==v1[0])
            {
                v2.pb(ok1?2:1);
                ok1 = true;
            }
            else if(x == v1[1])
            {
                v2.pb(ok2?3:1);
                ok2=true;
            }
            else{
                v2.pb(1);
            }
        }
        for(auto x: v2)
        {
            cout<<x<<" ";
        }
        cout<<endl;
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