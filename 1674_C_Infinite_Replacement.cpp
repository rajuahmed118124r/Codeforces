                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : C. Infinite Replacement
Problem link : https://codeforces.com/problemset/problem/1674/C
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
    string s,t;
    cin>>s>>t;
    int n = s.size(), m = t.size();
    bool b = false;
    for(int i=0; i<m; i++)
    {
        if(t[i]=='a')
        {
            b = true;
            break;
        }
    }
    if(m>1 && b)
    {
        cout<<-1<<endl;
        return;
    }
    else if(t[0]=='a' && m==1)
    {
        cout<<1<<endl;
    }
    else{
        cout<<(1LL<<n)<<endl;
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