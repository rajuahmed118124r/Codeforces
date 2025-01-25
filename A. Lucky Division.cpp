                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Lucky Division
Problem link : https://codeforces.com/problemset/problem/122/A
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
    int n, x, count =0;
    cin>>n;
    x = n;
    vector<int> v;
    while(n>0)
    {
        int digit = n%10;
        v.pb(digit);
        n/=10;
    }
    for(int i=0; i<v.size(); i++)
    {
        if(v[i]==7 || v[i]==4)
        {
            count++;
        }
    }

    if(x%4==0 || x%7==0 || x%47==0 || x%74==0 || x%447==0 || count == v.size())
    {
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}


int main()
{
    solve();
return 0;
}


                                                                     ///ALHAMDULILLAH