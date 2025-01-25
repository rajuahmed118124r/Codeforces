                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Jagged Swaps
Problem link : https://codeforces.com/contest/1896/problem/0
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

bool parmu(int n, vector<int>&v)
{
    for(int i=1; i<n-1; i++)
    {
        if(v[i-1]<v[i] && v[i]>v[i+1])
        {
            swap(v[i],v[i+1]);
            i=0;
        }
    }

    for(int i=0; i<n-1; i++)
    {
        if(v[i]>v[i+1])
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    int n;
    cin>>n;
    vector<int>v(n), v1;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    
    if(parmu(n,v))
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