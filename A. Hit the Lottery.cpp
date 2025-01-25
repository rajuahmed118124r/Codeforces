                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Hit the Lottery
Problem link : https://codeforces.com/problemset/problem/996/A
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
    ll n,sum=0;
    cin>>n;
    
    sum+=n/100;
    n=n%100;
    sum+=n/20;
    n= n%20;
    sum+=n/10;
    n%=10;
    sum+=n/5;
    n=n%5;
    sum+=n;
    
    cout<<sum<<endl;
}


int main()
{
    Raju;
    solve();
return 0;
}


                                                                     ///ALHAMDULILLAH