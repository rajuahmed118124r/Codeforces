                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Division?
Problem link : https://codeforces.com/contest/1669/problem/A
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
    if(n<=1399)
    {
        cout<<"Division 4\n";
    }
    else if(n>=1400 && n<=1599)
    {
        cout<<"Division 3\n";
    }
    else if(n>=1600 && n<=1899)
    {
        cout<<"Division 2\n";
    }
    else
    {
        cout<<"Division 1\n";
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