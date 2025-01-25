                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Yes-Yes?
Problem link : https://codeforces.com/problemset/problem/1759/A
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
    int n;
    string s, m="";
    cin>>s;
    n=s.size();
    for(int i=0; i<100; i++)
    {
        m+="Yes";
    }
    bool y = false;
    for(int i=0; i<m.size(); i++)
    {
        if(n+i<m.size() && m.substr(i,n)==s)
        {
            y = true;
            break;
        }
    }
    if(y)
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