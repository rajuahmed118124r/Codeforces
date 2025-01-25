                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Spell Check
Problem link : https://codeforces.com/problemset/problem/1722/A
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
    string s;
    cin>>s;
    string s1="Timru";
    sort(s.begin(), s.end());
    //cout<<s<<" ";
    if(s==s1)
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