                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. LuoTianyi and the Palindrome String
Problem link : https://codeforces.com/problemset/problem/1825/A
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
    string s, rev,s2;
    cin>>s;
    s2 = s;
    int sz = s.size();
    if(count(s.begin(), s.end(),s[0])==sz)
    {
        cout<<-1<<endl;
        return;
    }
    reverse(s.begin(), s.end());
    if(s!=s2) // checking palindrom or not
    {
        cout<<sz<<endl;
    }
    else{
        cout<<sz-1<<endl;
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