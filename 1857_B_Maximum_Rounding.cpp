                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Maximum Rounding
Problem link : https://codeforces.com/problemset/problem/1857/B
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
    string s;
    cin>>s;
    s = '0' + s;
    //cout<<s<<endl;
    int sz = s.size();
    for(int i=s.size()-1; i>=0; i--)
    {
        if(s[i]>='5')
        {
            s[i-1]++;
            sz = i;
        }
    }
    for(int i=(s[0]=='0');i<s.size(); i++)
    {
        if(i>=sz)
        {
            cout<<'0';
        }
        else{
            cout<<s[i];
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