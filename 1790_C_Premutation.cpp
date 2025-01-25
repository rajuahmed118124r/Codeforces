                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : C. Premutation
Problem link : https://codeforces.com/contest/1790/problem/C
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
    int n, x, y;
    cin>>n;
    vector<vector<int>>v(n,vector<int>(n));
    map<int,int>mp;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            cin>>v[i][j];
            if(j==n-2)
            {
                mp[v[i][j]]++;
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        if(mp[v[i][n-2]]==1)
        {
            x = i;
        }
        else y = v[i][n-2];
    }

    for(int i=0; i<n-1; i++)
    {
        cout<<v[x][i]<<" ";
    }
    cout<<y<<endl;
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