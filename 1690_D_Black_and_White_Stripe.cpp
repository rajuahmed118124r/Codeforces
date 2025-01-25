                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : D. Black and White Stripe
Problem link : https://codeforces.com/problemset/problem/1690/D
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
    int  n,k;
    string s;
    cin>>n>>k>>s;
    vector<int >v;
    int  cnt=0, mn = 0;
    for(int  j=0; j<k; j++)
    {
        if(s[j]=='W')
        {
            cnt++;
        }
    }

    mn = cnt;
    for(int  j=k; j<n; j++)
    {
        if(s[j-k]=='W')
        {
            cnt--;
        }
        if(s[j]=='W')
        {
            cnt++;
        }
        mn = min(mn, cnt);
    }
    cout<<mn<<endl;
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


                                                   //ALHAMDULILLAH