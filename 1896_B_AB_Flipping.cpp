                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. AB Flipping
Problem link : https://codeforces.com/contest/1896/problem/B
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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=n-1;
    for(int i=0; i<s.size(); i++)
    {
        if( s[i]=='B')
        {
            ans--;
        }
        else break;
    }
    for(int i=n-1; i>=0; i--)
    {
        if(s[i]=='A')ans--;
        else break;
    }
    if(ans>0)cout<<ans<<endl;
    else cout<<0<<endl;
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


