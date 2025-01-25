                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Halloumi Boxes
Problem link : https://codeforces.com/contest/1903/problem/A
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

bool check(vector<int>&v)
{
    int n = v.size();
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
    int n,k;
    cin>>n>>k;
    vector<int>v(n), v1;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    
    if(k==1 && check(v)==false)
    {
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