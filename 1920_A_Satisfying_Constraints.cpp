                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Satisfying Constraints
Problem link : https://codeforces.com/contest/1920/problem/A
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
    ll n;
    cin>>n;
    set<int>st;
    int a,x,l=1, r=1E9;
    while(n--)
    {
        cin>>a>>x;
        if(a==1)
        {
            l = max(l,x);
        }
        else if(a==2)
        {
            r = min(r,x);
        }
        else{
            st.insert(x);
        }
    }
    int ans = max(0, r-l+1);
    for(auto y: st)
    {
        if(l<=y && y<=r)
        {
            ans--;
        }
    }
    cout<<ans<<endl;
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