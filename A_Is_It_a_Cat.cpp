                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Is It a Cat?
Problem link : https://codeforces.com/problemset/problem/1800/A
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
    cin>>n;
    string s,s2="meow";
    cin>>s;
    for(int i=0; i<n; i++)
    {
        s[i]=tolower(s[i]);
    }
    s.erase(unique(s.begin(), s.end()),s.end());
    
    if(s==s2)
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