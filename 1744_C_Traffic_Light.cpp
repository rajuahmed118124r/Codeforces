                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : C. Traffic Light
Problem link : https://codeforces.com/problemset/problem/1744/C
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
    string s1,s2;
    cin>>n>>s1>>s2;
    s2+=s2;
    int ans=0, cnt=0;
    bool f = false;
    if(s1[0]=='g')
    {
        cout<<0<<endl;
        return;
    }
    for(int i=0; i<s2.size(); i++)
    {
        if(s2[i]=='g')
        {
            ans = max(ans, cnt);
            f = false;
        }
        if(s2[i]==s1[0] && f == false)
        {
            f=true;
            cnt = 0;
        }
        if(f)
        {
            cnt++;
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