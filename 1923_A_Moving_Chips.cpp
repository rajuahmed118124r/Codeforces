                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Moving Chips
Problem link : https://codeforces.com/contest/1923/problem/A
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

    int l,r;
    for(int i=0; i<n; i++)
    {
        if(v[i]==1)
        {
            l = i;
            break;
        }
    }
    for(int i=n-1; i>=0; i--)
    {
        if(v[i]==1)
        {
            r = i;
            break;
        }
    }
    int zero=0;
    for(int i=l; i<=r; i++)
    {
        if(v[i]==0)
        {
            zero++;
        }
    }
    cout<<zero<<endl;
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