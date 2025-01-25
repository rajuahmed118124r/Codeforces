                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : D. Double Strings
Problem link : https://codeforces.com/problemset/problem/1703/D
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

    vector<string>v(n);
    string ans;
    map<string, int>mp;
    for(string &x : v)
    {
        cin>>x;
        mp[x]++;
    }

    for(string s:v)
    {
        int i=0, m= s.size(), ok =0;
        string s1;
        while(i<m)
        {
            s1.pb(s[i]);
            string tmp = s.substr(i+1, m);
            if(mp[s1] && mp[tmp])
            {
                ok=1;
                break;
            }
            i++;
        }
        if(ok)
        {
            ans.pb('1');
        }
        else{
            ans.pb('0');
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