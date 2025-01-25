                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : C. Joty and Chocolate
Problem link : https://codeforces.com/contest/678/problem/C
Platform     : Codeforces
Author       : Md. Raju Miah
*/
#include<bits/stdc++.h>
using namespace std;


#define Raju ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define pb push_back
#define all(x) (x).begin(), (x).end()

ll GCD(ll a, ll b)
{
    return (__gcd(a,b));
}

ll LCM(ll a, ll b)
{
    return ((a/GCD(a,b))*b);
}

void solve()
{
    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    ll ans = 0;

    ans += (n / a) * p;
    ans += (n / b) * q;
    ll lcm_val = LCM(a, b), same;
    same = n / lcm_val; // it is repeated.
    ans -= (same * (p + q));
    ans += (same * max(p, q));
    cout << ans << endl;
}


int main()
{
    Raju;
    solve();
return 0;
}


                                                                     ///ALHAMDULILLAH