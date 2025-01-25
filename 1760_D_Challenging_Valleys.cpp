                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : D. Challenging Valleys
Problem link : https://codeforces.com/problemset/problem/1760/D
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
    ll n;
    cin>>n;
    vector<ll>v(n);
    int flag = 0, flag1 = 0;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        if(i==0)continue;
        int x = v[i]-v[i-1];
        if(x>0) flag = 1;
        if(flag==1 and x<0)
        {
            flag1=1;
        }
    }
    if(flag1==0)
    {
        yes;
    }
    else{
        no;
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