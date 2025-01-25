                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. A Balanced Problemset?
Problem link : https://codeforces.com/contest/1925/problem/B
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


void solve(){
    int n,k, ans=1;
    cin>>n>>k;
    for(int i=1; i*i<=n; i++)
    {
        if(n%i==0)
        {
            if(k<= n/i)
            {
                ans = max(ans, i);
            }
            if(k<=n /(n/i))
            {
                ans = max(ans, n/i);
            }
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