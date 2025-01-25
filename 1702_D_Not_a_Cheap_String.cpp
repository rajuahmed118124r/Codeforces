                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : D. Not a Cheap String
Problem link : https://codeforces.com/contest/1702/problem/D
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
    ll n, x=0, y=0;
    string s, s1, s2;
    cin>>s>>n;
    map<char, int>mp;
    s1 = s;
    sort(s1.begin(), s1.end());
    for(int i=0; i<s1.size(); i++)
    {
        if((x+(s1[i]-96))<=n)
        {
            s2+=s1[i];
            x+=(s1[i]-96);
        }
    }
    for(int i=0; i<s2.size();  i++)
    {
        mp[s2[i]]++;
    }
    for(int i=0; i<s.size(); i++)
    {
        if(mp[s[i]])
        {
            cout<<s[i];
            mp[s[i]]--;
        }
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