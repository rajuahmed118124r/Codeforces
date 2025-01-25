                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Pangram
Problem link : https://codeforces.com/problemset/problem/520/A
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
    string s,s1;
    cin>>s;
    set<char>st;
    for(char ch:s)
    {
        s1+= tolower(ch);
    }
    for(int i=0; i<s1.size(); i++)
    {
        st.insert(s1[i]);
    }
    if(st.size()==26)
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
    solve();
return 0;
}


                                                                     ///ALHAMDULILLAH