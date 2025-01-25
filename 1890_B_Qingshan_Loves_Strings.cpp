                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name :
Problem link :
Platform     : Codeforces
Author       : Md. Raju Miah
*/
#include<bits/stdc++.h>
using namespace std;


#define Raju ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define pb push_back
#define all(x) (x).begin(), (x).end()

bool isGood(string s) 
{
    for (int i = 1; i < s.length(); i++) 
    {
        if (s[i] == s[i - 1]) 
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    int n,m,sz;
    cin>>n>>m;
    string s,t;
    cin>>s>>t;
    map<int, int>mp;
    int x=0, y=0;
    for(int i=0; i<n-1; i++)
    {
        if(s[i]==s[i+1])
        {
            x++;
            mp[s[i]]++;
        }
    }
    for(int i=0; i<m-1; i++)
    {
        if(t[i]==t[i+1])
        {
            y++;
        }
    }
    if(x==0)
    {
        cout<<"YES\n";
    }
    else if(y!=0 || t[0]!=t[m-1] || mp.size()==2)
    {
        cout<<"NO\n";
    }
    else{
        auto ite = *mp.begin();
        if(ite.first!=t[0])
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
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

