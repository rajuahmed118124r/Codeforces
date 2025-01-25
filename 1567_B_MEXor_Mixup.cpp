                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. MEXor Mixup
Problem link : https://codeforces.com/problemset/problem/1567/B
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

void solve(vector<int>&v)
{
    int a, b;
    cin>>a>>b;
    int ans = b^v[a-1];

    if(ans==0)
    {
        cout<<a<<endl;
        return;
    }
    if(ans!=a)
    {
        cout<<a+1<<endl;
    }
    else{
        cout<<a+2<<endl;
    }
}


int main()
{
    Raju;
    int t;
    cin>>t;
    vector<int>v;
    v.pb(0);
    for(int i=1; i<=3*10e5; i++)
    {
        v.pb(v[i-1]^i);
    }
    while(t--)
    {
        solve(v);
    }
return 0;
}


                                                                     ///ALHAMDULILLAH