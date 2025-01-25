                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Lucky?
Problem link : https://codeforces.com/contest/1676/problem/A
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
    int sum1=0, sum2=0;
    int n= s.size();
    for(int i=0; i<n/2; i++)
    {
        sum1+=s[i]-48;
    }
    for(int i=n/2; i<n; i++)
    {
        sum2+=s[i]-48;
    }
    if(sum1==sum2)
    {
        cout<<"YES\n";
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