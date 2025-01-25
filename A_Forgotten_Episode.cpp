                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Forgotten Episode
Problem link : https://codeforces.com/problemset/problem/440/A
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
    ll n;
    cin >> n;
    vector<ll> v(n - 1);
    for (int i = 0; i<n-1; i++) 
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    ll x = *max_element(v.begin(), v.end());
    if(n!=x)
    {
        cout<<n<<endl;
    }
    else{
        for (int i = 1; i <= x; i++)
        {
            if (v[i - 1] == i) 
            {
            // cout << i << endl;
                continue;
            }
            else
            {
                cout << i << endl;
                break;
            }
        }
    }
}


int main()
{
    Raju;
    solve();
return 0;
}


                                                                     ///ALHAMDULILLAH