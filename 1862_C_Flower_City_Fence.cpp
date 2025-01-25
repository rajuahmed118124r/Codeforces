                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : C. Flower City Fence
Problem link : https://codeforces.com/problemset/problem/1862/C
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
    vector<int>v(n+1);
    map<int, int>mp1, mp2;
    for(int i=1; i<=n; i++)
    {
        cin>>v[i];
        mp1[i] = v[i];
        mp2[v[i]] = i;
    }

    for(int i=1; i<=n; i++)
    {
        int val = v[i];
        int first = mp1[val];
        int second = mp2[first];
        if(val!=second)
        {
            no;
            return;
        }
    }
    yes;
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