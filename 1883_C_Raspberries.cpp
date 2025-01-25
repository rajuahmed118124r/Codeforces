                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : C. Raspberries
Problem link : https://codeforces.com/problemset/problem/1883/C
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
    int n, k;
    cin>>n>>k;
    vector<int>v(n), v1;
    int mn = INT_MIN;
    int even =0;
    bool t =false;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    for(int i=0; i<n; i++)
    {
        if(v[i]%k==0)
        {
            cout<<0<<endl;
            return;
        }
        if(v[i]%2==0)even++;
        mn = max(mn, v[i]%k);
        v1.pb(v[i]%k);
    }
    if(k==4)
    {
        int mx = 4 - *max_element(v1.begin(), v1.end());
        if(even>=2)
        {
            mx = min(mx, 0);
        }
        else if(even==1)
        {
            mx = min(mx, 1);
        }
        else{
            mx = min(mx, 2);
        }
        cout<<mx<<endl;
        return;
    }
    cout<<k-mn<<endl;
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