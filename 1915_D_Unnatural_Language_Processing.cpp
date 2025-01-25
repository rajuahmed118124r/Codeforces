                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : D. Unnatural Language Processing
Problem link : https://codeforces.com/contest/1915/problem/D
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
    cin >> n;
    string s;
    cin >> s;
    vector<char>v;
    for(int i=n-1; i>=0;)
    {
        if(s[i]=='a' || s[i]=='e')
        {
            v.pb(s[i]);
            v.pb(s[i-1]);
            v.pb('.');
            i-=2;
        }
        else{
            v.pb(s[i]);
            v.pb(s[i-1]);
            v.pb(s[i-2]);
            v.pb('.');
            i-=3;
        }
    }
    for(int i=v.size()-2; i>=0; i--)
    {
        cout<<v[i];
    }
    cout<<endl;
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

