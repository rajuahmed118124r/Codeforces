                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : C. Most Similar Words
Problem link : https://codeforces.com/problemset/problem/1676/C
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
    int n,x;
    cin>>n>>x;
    vector<string>v(n);
    vector<int>v1;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    
    sort(v.begin(), v.end());
    int mx=INT_MAX;
    for(int i=0; i<v.size(); i++)
    {
        for(int j=i+1; j<v.size(); j++)
        {
            int dif=0;
            for(int ind=0;ind<x;ind++){
                dif+= abs(v[i][ind]-v[j][ind]);
            }
            mx = min(mx,dif);
        }
    }
    cout<<mx<<endl;
    
    
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