                                                  ///BISMILLAHIR RAHMANIR RAHIM
                                                 ///============================
/*
Problem name :
Problem link :
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
    ll n, k,x;
    cin>>n>>k>>x;

        ll sum1 = k*(k+1)/2;
        ll sum2 = (k*(2*(n+1-k)+(k-1)))/2;

        if(x>=sum1 && x<=sum2)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
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
