                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Long Comparison
Problem link : https://codeforces.com/problemset/problem/1613/A
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
    ll x1, p1, x2, p2, f, l;
    cin>>x1>>p1>>x2>>p2;

    double ans = log10(1.00 * x1/x2) + p1 - p2;
    if(ans>0)
    {
        cout<<">"<<endl;
    }
    else if(ans==0)
    {
        cout<<"="<<endl;
    }
    else{
        cout<<"<"<<endl;
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