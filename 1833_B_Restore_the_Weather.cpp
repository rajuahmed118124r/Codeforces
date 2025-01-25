                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name :
Problem link :
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
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>>a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i].first;
        a[i].second=i;
    }
    sort(a.begin(),a.end());
    vector<int>b(n), ans(n);
    for(int i=0; i<n; i++)
    {
        cin>>b[i];
    }
    sort(b.begin(),b.end());
    
    for(int i=0; i<n; i++)
    {
        ans[a[i].second] = b[i];
    }
    for(auto x:ans)
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


                                                                     ///ALHAMDULILLAH