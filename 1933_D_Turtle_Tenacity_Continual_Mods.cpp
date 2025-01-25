                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : D. Turtle Tenacity: Continual Mods
Problem link : https://codeforces.com/contest/1933/problem/D
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
    vector<int>v(n);
    map<int, int>mp;
    int x = 0;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        x = __gcd(x, v[i]);
        mp[v[i]]++;
    }
    if(mp[x]>1)
    {
        no;
    }
    else{
        yes;
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