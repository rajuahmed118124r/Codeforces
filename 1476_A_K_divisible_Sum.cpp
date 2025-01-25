                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. K-divisible Sum
Problem link : https://codeforces.com/problemset/problem/1476/A
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
    ll n,k;
    cin>>n>>k;
    if(n==k)
    {
        cout<<"1"<<endl;
    }
    else if(n>k)
    {
        if(n%k==0)
        {
            cout<<"1"<<endl;
        }
        else{
            cout<<"2"<<endl;
        }
    }
    else{
        ll x = k/n;
        if(k%n)
        {
            x++;
        }
        cout<<x<<endl;
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