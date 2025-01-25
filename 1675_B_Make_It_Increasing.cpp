                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Make It Increasing
Problem link : https://codeforces.com/contest/1675/problem/B
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
    int n, poss=0;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    for(int i=n-2; i>=0; i--)
    {
        int pre = v[i+1];
        int cur = v[i];
        if(pre==0)
        {
            poss  = -1;
            break;
        }
        while(cur>=pre)
        {
            cur/=2;
            poss++;
        }
        v[i]=cur;
    }
    cout<<poss<<endl;
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