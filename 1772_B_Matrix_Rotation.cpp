                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Matrix Rotation
Problem link : https://codeforces.com/contest/1772/problem/B
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
    vector<int>v(4);
    for(int i=0; i<4; i++)
    {
        cin>>v[i];
    }
    
    int mn = *min_element(v.begin(), v.end());
    int mx = *max_element(v.begin(), v.end());
    if((mn==v[0] && mx == v[3]) ||(mn==v[3] && mx==v[0]))
    {
        cout<<"YES\n";
    }
    else if((mn==v[1] && mx == v[2]) ||(mn==v[2] && mx==v[1]))
    {
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
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