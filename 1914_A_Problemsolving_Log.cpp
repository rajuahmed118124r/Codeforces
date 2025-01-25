                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Problemsolving Log
Problem link : https://codeforces.com/contest/1914/problem/A
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
    map<char, int>mp;
    map<char, int>mp1;
    int cnt =0;
    for(char ch='A'; ch<='Z'; ch++)
    {
        mp1[ch] = ch -'A'+1; 
    }

    for(int i=0; i<n; i++)
    {
        mp[s[i]]++;
    }
    set<char>st;
    for(int i=0; i<n; i++)
    {
        st.insert(s[i]);
    }

    for(auto x: st)
    {
        if(mp[x]>=mp1[x])
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
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