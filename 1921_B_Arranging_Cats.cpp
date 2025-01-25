                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Arranging Cats
Problem link : https://codeforces.com/contest/1921/problem/B
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
    string s,f;
    cin>>n>>s>>f;
    int c1=0, c2=0, same=0;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='1')c1++;
        if(f[i]=='1')c2++;
        if(s[i]=='1' && f[i]=='1')same++;
    }

    int ans1 = c1-same;
    int ans2 = c2-same;
    if(ans1>ans2)
    {
        cout<<ans1<<endl;
    }
    else{
        cout<<ans2<<endl;
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