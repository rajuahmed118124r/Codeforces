                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : C. Removal of Unattractive Pairs
Problem link : https://codeforces.com/contest/1907/problem/C
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
    int n, mx=0;
    cin>>n;
    string s;
    cin>>s;
    map<char, int>mp;
    for(int i=0; i<n; i++)
    {
        mp[s[i]]++;
        mx = max(mx, mp[s[i]]);
    }
    int k = n - mx;
    if(mx>=k)
    {
        cout<<mx-k<<endl;
        return;
    }
    cout<<n%2<<endl;
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