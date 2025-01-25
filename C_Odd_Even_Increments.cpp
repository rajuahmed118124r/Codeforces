                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : C. Odd/Even Increments
Problem link : https://codeforces.com/problemset/problem/1669/C
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
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    bool t = false;
    bool f = false;

    for(int i=0; i<n; i+=2)
    {
        if(v[i]%2==0)
        {
            t = true;
        }
        else{
            f = true;
        }
    }
    if(t && f)
    {
        cout<<"NO\n";
        return;
    }

    t = false;
    f = false;
    for(int i=1; i<n; i+=2)
    {
        if(v[i]%2==0)
        {
            t = true;
        }
        else{
            f = true;
        }
    }
    if(t && f)
    {
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
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