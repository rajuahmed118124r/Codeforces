                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Not a Substring
Problem link : https://codeforces.com/contest/1860/problem/A
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
    string s, a, b;
    cin>>s;
    int sz = s.size();
    for(int i=0; i<2*sz; i++)
    {
        a+="()"[i&1];
        b+=")("[i<sz];
    }

    if(a.find(s)==string::npos)
    {
        cout<<"YES\n"<<a<<endl;
    }
    else if(b.find(s)==string::npos)
    {
        cout<<"YES\n"<<b<<endl;
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