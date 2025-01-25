                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Food for Animals
Problem link : https://codeforces.com/problemset/problem/1675/A
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
    int a,b,c,x,y;
    cin>>a>>b>>c>>x>>y;
    
    x = max(0, x-a);
    y = max(0, y-b);
    
    if(c>=x+y)
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