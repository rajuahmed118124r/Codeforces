                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Colourblindness
Problem link : https://codeforces.com/problemset/problem/1722/B
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
    int n;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0; i<s1.size(); i++)
    {
        if(s1[i]=='G')
        {
            s1[i]='B';
        }
        if(s2[i]=='G')
        {
            s2[i]='B';
        }
    }
    if(s1==s2)
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