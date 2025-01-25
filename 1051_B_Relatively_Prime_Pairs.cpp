                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Relatively Prime Pairs
Problem link : https://codeforces.com/problemset/problem/1051/B
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
    ll l,r, range;
    cin>>l>>r;
    range = (r-l+1)/2;
    if(range>=1)
    {
        cout<<"YES\n";
        for(ll i=l; i<=r && range!=0; i+=2)
        {
            cout<<i<<" "<<i+1<<endl;
            range--;
        }
    }
    else{
        cout<<"NO\n";
    }

}


int main()
{
    Raju;
    solve();
return 0;
}


                                                                     ///ALHAMDULILLAH