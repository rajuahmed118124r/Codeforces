                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Theatre Square
Problem link : https://codeforces.com/contest/1/problem/A
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
    ll n,m,a,x,y;
    cin>>n>>m>>a;
    if(n%a==0)
    {
        x = n/a;
    }
    else x = n/a +1;
    if(m%a==0)
    {
        y= m/a;
    }
    else y = m/a +1;
    cout<<x*y<<endl;
}


int main()
{
    Raju;
    solve();
return 0;
}

                                                                     ///ALHAMDULILLAH