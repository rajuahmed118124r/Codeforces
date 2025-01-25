                                                            ///BISMILLAHIR RAHMANIR RAHIM
                                                           ///============================
/*
Problem name : A. Stones on the Table
Problem link : https://codeforces.com/problemset/problem/266/A
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
    int n, count=0;
    cin>>n;
    string s;
    cin>>s;

    for(int i=1; i<=s.size()-1; i++)
    {
        if(s[i]==s[i-1])
        {
            count++;
        }
    }
    cout<<count<<endl;
}


int main()
{
    Raju;

    solve();
return 0;
}


                                                                     ///ALHAMDULILLAH
