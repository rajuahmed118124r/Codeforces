                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Red and Blue
Problem link : https://codeforces.com/problemset/problem/1469/B
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
    int n,m;
    cin>>n;
    vector<int>v(n);
    int sum =0, mx_v=0, mx_m=0;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        sum+=v[i];
        mx_v = max(mx_v, sum);
    }

    sum=0;
    cin>>m;
    for(int i=0; i<m; i++)
    {
        int x;
        cin>>x;
        sum+=x;
        mx_m = max(mx_m, sum);
    }

    int ans = (mx_v+mx_m);
    if(ans>0)
    {
        cout<<ans<<endl;
    }
    else{
        cout<<0<<endl;
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