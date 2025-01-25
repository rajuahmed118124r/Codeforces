                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Dictionary
Problem link : https://codeforces.com/contest/1674/problem/B
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
    string s;
    cin>>s;
    vector<string>v;
    for(int i='a'; i<='z'; i++)
    {
        for(int j='a'; j<='z'; j++)
        {
            if(i==j)continue;
            else{
                string x ="";
                x+=i;
                x+=j;
                v.pb(x);
            }
        }
    }
    for(int i=0; i<v.size(); i++)
    {
        if(v[i]==s)
        {
            cout<<i+1<<endl;
            break;
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