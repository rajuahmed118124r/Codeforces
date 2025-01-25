                                  ///BISMILLAHIR RAHMANIR RAHIM
                                 ///============================

/*
 Problem name : A. Grasshopper on a Line
 Problem link : https://codeforces.com/contest/1837/problem/A
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
    int n,k;
    cin>>n>>k;
    if(n<k || n%k!=0)
    {
        cout<<1<<"\n"<<n<<"\n";

    }
    else{
        cout<<2<<"\n"<<1<<" "<<(n-1)<<"\n";
    }


}


signed main()
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
