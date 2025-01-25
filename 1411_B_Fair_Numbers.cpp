                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Fair Numbers
Problem link : https://codeforces.com/contest/1411/problem/B
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

bool check(ll n)
{
    string s = to_string(n);
    for(int i=0; i<s.size(); i++)
    {
        int x = s[i]-'0';
        if(x==0)continue;
        if(n%x!=0)
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    ll n;
    cin>>n;
    for(ll i=n;; i++)
    {
        bool f = check(i);
        if(f)
        {
            cout<<i<<endl;
            return;
        }
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