                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : D. Divide and Equalize
Problem link : https://codeforces.com/problemset/problem/1881/D
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
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    
    map<int, int>mp;
    for(int k=0; k<n; k++)
    {
        int curr = v[k];
        for(int i=2; i*i<=curr; i++)
        {
            while(curr%i==0)
            {
                mp[i]++;
                curr/=i;
            }
        }
        if(curr>1)
        {
            mp[curr]++;
        }
    }
    bool ok = true;
    for(auto x : mp)
    {
        if(x.second%n!=0)
        {
            ok = false;
            break;
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