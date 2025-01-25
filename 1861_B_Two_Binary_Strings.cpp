                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Two Binary Strings
Problem link : https://codeforces.com/problemset/problem/1861/B
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
    string a,b;
    cin>>a>>b;
    bool ok = false;
    for(int i=0; i+1<a.size(); i++)
    {
        if((a[i]==b[i] && a[i]=='0') && (a[i+1]==b[i+1] && a[i+1]=='1'))
        {
            ok = true;
        }
    }
    if(ok)
    {
        yes;
    }
    else{
        no;
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