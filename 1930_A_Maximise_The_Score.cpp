                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Maximise The Score
Problem link : https://codeforces.com/contest/1930/problem/A
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
    vector<int>v(2*n);
    for(int i=0; i<2*n; i++)
    {
        cin>>v[i];
    }
    ll sum =0;
    sort(v.begin(), v.end());
    while(v.size()>=2)
    {
        sum += min(v.back(), v[v.size() - 2]);
        v.pop_back();
        v.pop_back();
    }
    cout<<sum<<endl;
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