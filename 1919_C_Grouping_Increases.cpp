                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : C. Grouping Increases
Problem link : https://codeforces.com/contest/1919/problem/C
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
    int ans=0, x = n+2, y=n+2;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        if(x>y)
        {
            swap(x,y);
        }
        if(v[i]<=x)
        {
            x=v[i];
        }
        else if(v[i]<=y)
        {
            y = v[i];
        }
        else{
            x = v[i];
            ans++;
        }
    }
    cout<<ans<<endl;
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