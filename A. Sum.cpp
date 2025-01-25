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
    int a,b,c;
    cin>>a>>b>>c;
    vector<int>v;
    for(int i=0; i<3; i++)
    {
        v.pb(a);
        v.pb(b);
        v.pb(c);
    }
    sort(v.begin(), v.end());
    if(v[0]+v[1]==v[2])
    {
        cout<<"YES\n";
    }
    
    else{
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