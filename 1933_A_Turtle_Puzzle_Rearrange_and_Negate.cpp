                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Turtle Puzzle: Rearrange and Negate
Problem link : https://codeforces.com/contest/1933/problem/A
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
    ll sum=0;
    for(int i=0; i<n;i++)
    {
        cin>>v[i];
        sum+=abs(v[i]);
    }
    cout<<sum<<endl;
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