                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : C. Move Brackets
Problem link : https://codeforces.com/problemset/problem/1374/C
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
    cin>>n;
    string s;
    cin>>s;
    stack<int>st;
    for(int i=0; i<n; i++)
    {
        char ch = s[i];
        if (!st.empty() && ch == ')' && st.top() == '(')
        {
            st.pop();
        }
        else{
            st.push(ch);
        }
    }
    cout<<st.size()/2<<endl;
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