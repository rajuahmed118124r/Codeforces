                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. 2023
Problem link : https://codeforces.com/contest/1916/problem/A
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
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    ll pdct=1;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        pdct*=v[i];
    }
    if(2023%pdct==0)
    {
        yes;
        cout<<2023/pdct<<" ";
        for(int i=0; i<k-1; i++)
        {
            cout<<"1 ";
        }
        cout<<endl;
    }
    else no;
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