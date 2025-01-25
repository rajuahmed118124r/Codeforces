                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : D. Matryoshkas
Problem link : https://codeforces.com/problemset/problem/1790/D
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
    map<int, int> mp;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        mp[v[i]]++;
    }

    sort(v.begin(), v.end());
    int ans =0;

    for(int i=0; i<n; i++)
    {
        int val=v[i];
        if(mp[v[i]]!=0)
        {
            ans++;
            while(mp[val]>0)
            {
                mp[val]--;
                val++;
            }
        }
    }
    cout<<ans<<endl;
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