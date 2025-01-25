                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Prefixes
Problem link : https://codeforces.com/problemset/problem/1216/A
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
    int count=0;
    for(int i=1; i<=n; i+=2)
    {
        if(s[i-1]==s[i])
        {
            count++;
            if(s[i]=='a')
            {
                s[i]='b';
            }
            else
            {
                s[i]='a';
            }
        }
        
    }
    cout<<count<<endl;
    cout<<s<<endl;
}


int main()
{
    Raju;
    solve();
return 0;
}


                                                                     ///ALHAMDULILLAH