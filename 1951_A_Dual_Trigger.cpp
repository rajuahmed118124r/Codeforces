                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Dual Trigger
Problem link : https://codeforces.com/contest/1951/problem/A
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
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(s[0]=='1' && n==1)
    {
        no;
        return;
    }
    int one=0, f = 0;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='1')
        {
            one++;
            v.pb(i);
        }
    }
    if(one%2==1)
    {
        no;
    }
    else if(one==2 && (v[1]-v[0]==1)){
        no;
    }
    else{
        yes;
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