                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. LLPS
Problem link : https://codeforces.com/problemset/problem/202/A
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
    string s,ans="";
    cin>>s;
    sort(s.begin(), s.end());
    char mx = s[s.size()-1];
    for(auto ch :s)
    {
        if(mx==ch)
        {
            ans+=ch;
        }
    }
    cout<<ans<<endl;
}


int main()
{
    Raju;
    solve();
return 0;
}


                                                                     ///ALHAMDULILLAH