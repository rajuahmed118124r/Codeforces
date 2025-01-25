                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : C. Thermostat
Problem link : https://codeforces.com/contest/1759/problem/C
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
    int l, r, x, a, b;
	cin >> l >> r >> x >> a >> b;
	if (a > b) swap(a, b);
	if (a == b) cout << "0\n";
	else if (b - a >= x) cout << "1\n";
	else if (x + b <= r || (x + l <= b && x + l <= a)) cout << "2\n";
	else if ((x + l <= b && x + l <= r && x + a <= r)) cout << "3\n";
	else cout << "-1\n";
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