                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Polycarp Writes a String from Memory
Problem link : https://codeforces.com/problemset/problem/1702/B
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
    string s;
    cin>>s;
    int n = s.size(), count=1;
    set<char>st;
    for(int i=0; i<n; i++)
    {
        st.insert(s[i]);
        if(st.size()>3)
        {
            count++;
            st.clear();
            st.insert(s[i]);
        }
    }
    cout<<count<<endl;
    
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