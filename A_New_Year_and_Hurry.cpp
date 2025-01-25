                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. New Year and Hurry
Problem link : https://codeforces.com/problemset/problem/750/A
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
    int n,k, count=0;
    cin>>n>>k;
    int x = 240-k;
    vector<int>v;
    for(int i=1; i<=n; i++)
    {
        v.pb((x-5*i));
        x = (x-5*i);
    }
    for(int i=0; i<v.size(); i++)
    {
        if(v[i]>=0)
        {
            count++;
        }
    }
    cout<<count<<endl;
}


int main()
{
    Raju;
    solve();
return 0;
}


                                                                     ///ALHAMDULILLAH