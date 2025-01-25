                                          ///BISMILLAHIR RAHMANIR RAHIM
                                         ///============================

/*
 Problem name : B. Comparison String
 Problem link : https://codeforces.com/contest/1837/problem/B
 Platform     : Codeforces
 Author       : Md. Raju Miah
*/
#include<bits/stdc++.h>
using namespace std;

#define Raju ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define pb push_back


void solve()
{
    int n;
    string s;
    int a=0,b=0;
    cin >>n >>s;

    for ( int i = 0; i < n; i++)
    {
        a++;
        if(s[i]!=s[i+1])
        {
            b=max(a,b);
            a=0;
        }
    }
    cout << b+1 <<"\n";
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
                                             //ALHAMDULILLAH

