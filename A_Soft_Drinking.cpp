                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Soft Drinking
Problem link : https://codeforces.com/problemset/problem/151/A
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
    int n, k, l, c, d, p, nl, np, a, b, x, y;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    a = (k*l)/nl;
    b = c*d;
    x = p/np;
    y = min(min(a,b),x);
    cout<<y/n<<endl;
}


int main()
{
    Raju;
    solve();
return 0;
}


                                                                     ///ALHAMDULILLAH