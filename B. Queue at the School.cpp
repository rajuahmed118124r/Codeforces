                                                            ///BISMILLAHIR RAHMANIR RAHIM
                                                           ///============================
/*
Problem name : B. Queue at the School
Problem link : https://codeforces.com/problemset/problem/266/B
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
    int n, t;
    cin>>n>>t;
    string s;
    cin>>s;
    while(t--)
    {
        for(int i=0; i<n-1; i++)
        {
            if(s[i]=='B' && s[i+1]=='G')
            {
                swap(s[i], s[i+1]);
                i++;
            }
        }
    }
    cout<<s<<endl;

}


int main()
{
    Raju;
    solve();
return 0;
}


                                                                     ///ALHAMDULILLAH
