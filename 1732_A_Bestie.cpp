                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Bestie
Problem link : https://codeforces.com/contest/1732/problem/A
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
    int g=0;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        g = __gcd(g,v[i]);
    }
    if(g==1)
    {
        cout<<0<<endl;
    }
    else if(__gcd(g,n)==1)
    {
        cout<<1<<endl;
    }
    else if(__gcd(g, n-1)==1)
    {
        cout<<2<<endl;
    }
    else{
        cout<<3<<endl;
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