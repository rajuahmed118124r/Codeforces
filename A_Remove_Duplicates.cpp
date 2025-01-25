                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Remove Duplicates
Problem link : https://codeforces.com/contest/978/problem/A
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
    vector<int>v(n),v1;
    map<int,int>mp;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        mp[v[i]]++;
    }

    for(int i=0; i<n; i++)
    {
        if(mp[v[i]]==1)
        {
            v1.pb(v[i]);
        }
        else{
            mp[v[i]]--;
        }
    }
    cout<<v1.size()<<endl;
    for(auto x: v1)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    
}


int main()
{
    Raju;
    solve();
return 0;
}


                                                                     ///ALHAMDULILLAH