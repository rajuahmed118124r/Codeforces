                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Div Times Mod
Problem link : https://codeforces.com/contest/1085/problem/B
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
    int x = 1e9;
    for(int i=1; i<k; i++)
    {
        if(n%i!=0)
        {
            continue;
        }
        x = min(x, n / i * k + i);
    }
    cout<<x<<endl;
}


int main()
{
    Raju;
    int t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }
return 0;
}


                                                                     ///ALHAMDULILLAH