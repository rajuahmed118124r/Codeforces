                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Rudolph and Tic-Tac-Toe
Problem link : https://codeforces.com/contest/1846/problem/B
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
    string a,b,c;
    cin>>a>>b>>c;
    if(a[0]==a[1] && a[1]==a[2] &&a[1]!='.'){cout<<a[0]<<endl;return;}
    if(b[0]==b[1] && b[1]==b[2] &&b[1]!='.'){cout<<b[0]<<endl;return;}
    if(c[0]==c[1] && c[1]==c[2] &&c[1]!='.'){cout<<c[0]<<endl;return;}
    if(a[0]==b[1] && b[1]==c[2] && b[1]!='.'){cout<<b[1]<<endl;return;}
    if(a[2]==b[1]&&b[1]==c[0]&&b[1]!='.') {cout<<c[0]<<endl; return;}
    if(a[0]==b[0]&&b[0]==c[0]&&a[0]!='.') {cout<<c[0]<<endl; return;}
    if(a[1]==b[1]&&b[1]==c[1]&&a[1]!='.') {cout<<c[1]<<endl; return;}
    if(a[2]==b[2]&&b[2]==c[2]&&a[2]!='.') {cout<<c[2]<<endl; return;}
    cout << "DRAW\n";
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