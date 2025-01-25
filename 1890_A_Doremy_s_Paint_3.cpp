                                                            ///BISMILLAHIR RAHMANIR RAHIM
                                                           ///============================
/*
Problem name : A. Doremy's Paint 3
Problem link : https://codeforces.com/contest/1890/problem/A
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
    vector<int>v(n), v1;
    map<int, int>mp;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        mp[v[i]]++;
    }
    if(mp.size()==1)
    {
        cout<<"YES\n";
        return;
    }
        else if(mp.size()==2)
        {
            int j=0;
            for(auto && x: mp)
            {
                v[j++]=x.first;
            }
            if(abs(mp[v[0]]-mp[v[1]])<2)
            {
                cout<<"YES\n";
                return;
            }
            cout<<"NO\n";
        }
        else{
            cout<<"NO\n";
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
