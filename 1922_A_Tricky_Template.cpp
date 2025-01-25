                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Tricky Template
Problem link : https://codeforces.com/contest/1922/problem/0
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
    string x,y,z;
    cin>>n>>x>>y>>z;
    bool t = false;
    for(int i=0; i<n; i++)
    {
        if(x[i]==y[i])
        {
            if(z[i]!=x[i])
            {
                yes;
                return;
            }
        }
        else{
            if(z[i]!=x[i] && z[i]!=y[i])
            {
                yes;
                return;
            }
        }
    }
    no;
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