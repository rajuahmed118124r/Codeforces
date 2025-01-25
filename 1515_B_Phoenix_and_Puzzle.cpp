                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Phoenix and Puzzle
Problem link : https://codeforces.com/problemset/problem/1515/B
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

bool is_square(ll n)
{
    ll y;
    y = sqrt(n);
    return y*y ==n;
}

void solve()
{
    ll n;
    cin>>n;
    if(n%2==0 && is_square(n/2))
    {
        yes;
    }
    else if(n%4==0 && is_square(n/4))
    {
        yes;
    }
    else{
        no;
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