                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Marathon
Problem link : https://codeforces.com/problemset/problem/1692/A
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
    vector<int>v(4),v1;
    for(int i=0; i<4; i++)
    {
        cin>>v[i];
    }
    for(int i=0; i<4; i++)
    {
        if(v[i]>v[0])
        {
            v1.pb(v[i]);
        }
    }
    cout<<v1.size()<<endl;
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