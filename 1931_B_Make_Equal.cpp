                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Make Equal
Problem link : https://codeforces.com/contest/1931/problem/B
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
    cin >> n;
    vector<int> v(n);
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }

    int avg = sum / n;
    ll lagbe = 0;
    for (int i = 1; i<n; i++)
    {
        lagbe += max(0, v[i-1] - avg);
        v[i-1] = avg;
        v[i]+=lagbe;
        lagbe=0;
    }
    for(int i=0; i<n; i++)
    {
        if(v[i]!=avg)
        {
            no;
            return;
        }
    }
    yes;
    // for(auto x: v)
    // {
    //     cout<<x<<" ";
    // }
    // cout<<endl;
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