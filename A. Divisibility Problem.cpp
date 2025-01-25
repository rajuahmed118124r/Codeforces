                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Divisibility Problem
Problem link : https://codeforces.com/problemset/problem/1328/A
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
    int a, b, mod;
    cin>>a>>b;
    if(a<b)
    {
        cout<<b-a<<endl;
    }
    else{
        if(a%b==0)
        {
            cout<<0<<endl;
        }
        else{
            mod = a%b;
            cout<<b-mod<<endl;
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