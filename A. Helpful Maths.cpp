                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Helpful Maths
Problem link : https://codeforces.com/contest/339/problem/A
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
    int n = s.size();
    vector<int>v;
    v.clear();
    for(int i=0; i<n; i+=2)
    {
        v.push_back(s[i]-48);
    }
    sort(v.begin(), v.end());

    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i];
        if(i!=v.size()-1)
        {
            cout<<'+';
        }
    }
    cout<<endl;
}


int main()
{
    Raju;
    solve();
return 0;
}


                                                                     ///ALHAMDULILLAH