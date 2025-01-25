                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Getting Points
Problem link : https://codeforces.com/contest/1902/problem/B
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

void solve() {
    ll n, p, l, r;
    cin >> n >> p >> l >> r;

    ll weeks = (n - 1) / 7 + 1; 

    ll max_weeks = weeks / 2; 
    ll extra_week = (weeks % 2) ? 1 : 0; 

    ll max_val = r * 2 + l; 
    ll extra_val = extra_week * r + l; 

    ll days = (p + max_val - 1) / max_val;
    if (days <= max_weeks) {
        cout << n - days << endl;
        return;
    }

    ll remaining_days = max_weeks * max_val + extra_val;
    max_weeks++;

    if (remaining_days >= p) {
        cout << n - max_weeks << endl;
        return;
    }

    ll remaining_tasks = p - remaining_days;
    ll additional_weeks = (remaining_tasks + l - 1) / l;

    max_weeks += additional_weeks;
    cout << n - max_weeks << endl;
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