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
    int n;
    cin>>n;
    vector<int> v(n+1);
    for(int i=1; i<=n; i++)
    {
        cin>>v[i];
    }
    for(int i=1; i<=n; i++)
    {
        cout<<n-v[i] + 1<<" ";
    }
    cout<<"\n";

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
