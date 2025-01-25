                                                            ///BISMILLAHIR RAHMANIR RAHIM
                                                           ///============================
/*
Problem name : B. Chips on the Board
Problem link : https://codeforces.com/contest/1879/problem/B
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
    ll n, sum1 =0, sum2=0;
    cin>>n;
    vector<ll>v(n), v1(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        sum1+=v[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>v1[i];
        sum2+=v1[i];
    }

    ll v1_min = *min_element(v.begin(),v.end());
    ll v2_min = *min_element(v1.begin(),v1.end());

    ll ans1 = sum1+(v2_min*n);
    ll ans2 = sum2+(v1_min*n);
    cout<<min(ans1,ans2)<<endl;

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
    cout<<endl;
return 0;
}


                                                                     ///ALHAMDULILLAH
