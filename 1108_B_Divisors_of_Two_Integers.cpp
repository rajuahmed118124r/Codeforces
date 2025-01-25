                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Divisors of Two Integers
Problem link : https://codeforces.com/contest/1108/problem/B
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
    int n;
    cin >> n;
    vector<int> v(n), div;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int mx = *max_element(v.begin(), v.end());
    for(int i=1; i*i<=mx; i++)
    {
        if(mx%i==0)
        {
            div.pb(i);
            if(mx/i!=i)
            {
                div.pb(mx/i);
            }
        }
    }

    for(auto x: div)
    {
        auto it = find(v.begin(), v.end(),x);
        if(it!=v.end())
        {
            v.erase(it);
        }
    }
    cout << mx << " " << *max_element(v.begin(), v.end()) << endl;
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