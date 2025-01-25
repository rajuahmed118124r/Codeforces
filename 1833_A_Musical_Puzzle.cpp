                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Musical Puzzle
Problem link : https://codeforces.com/problemset/problem/1833/A
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
    string s;
    cin>>s;
    set<string>st;
    for(int i=0; i<n-1; i++)
    {
        string s1;
        s1.pb(s[i]);
        s1.pb(s[i+1]);
        st.insert(s1);
    }
    cout<<st.size()<<endl;
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