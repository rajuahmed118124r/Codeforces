                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Ultra-Fast Mathematician
Problem link : https://codeforces.com/problemset/problem/61/A
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
    string s, s1,s2;
    cin>>s>>s1;
    vector<char>v;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]==s1[i])
        {
            v.pb('0');
        }
        else{
            v.pb('1');
        }
    }
    for(auto x: v)
    {
        cout<<x;
    }
    cout<<endl;
}


int main()
{
    Raju;
    
    solve();
return 0;
}


                                                                     ///ALHAMDULILLAH