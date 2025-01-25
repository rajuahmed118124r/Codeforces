                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Choosing Teams
Problem link : https://codeforces.com/problemset/problem/432/A
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
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    int count=0;
    for(int i=0; i<n; i++)
    {
        if(v[i]<5)
        {
            if(5-v[i]>=k)
            {
                count++;
            }
        }
    }
    if(count>=3)
    {
        cout<<count/3;
    }
    else{
        cout<<0;
    }
}


int main()
{
    Raju;
    solve();
return 0;
}


                                                                     ///ALHAMDULILLAH