                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Cover in Water
Problem link : https://codeforces.com/contest/1900/problem/A
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
    string s;
    cin >> s;
    int total_dot=0;
    vector<int> v;
    int found = s.find("...");
    if(found!=string::npos)
    {
        cout<<2<<endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if(s[i]=='.')
        {
            total_dot++;
        }
    }
    cout<<total_dot<<endl;
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