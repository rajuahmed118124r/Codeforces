                                                            ///BISMILLAHIR RAHMANIR RAHIM
                                                           //============================

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


void solve()
{
    ll n;
    cin>>n;
    while(n%2==0)
    {
        n = n/2;
    }
    if(n%2==1&&n>1)
    {
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
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
                                                                //ALHAMDULILLAH
