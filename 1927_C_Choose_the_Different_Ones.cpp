                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : C. Choose the Different Ones!
Problem link : https://codeforces.com/contest/1927/problem/C
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
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>v(n), v1(m);
    set<int>st1, st2, st3;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        if(v[i]<=k)
        {
            st1.insert(v[i]);
            st3.insert(v[i]);
        }
    }
    for(int i=0; i<m; i++)
    {
        cin>>v1[i];
        if(v1[i]<=k)
        {
            st2.insert(v1[i]);
            st3.insert(v1[i]);
        }
    }
    if(st1.size()>=k/2 && st2.size()>=k/2 && st3.size()==k)
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