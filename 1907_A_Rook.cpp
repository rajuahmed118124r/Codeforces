                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Rook
Problem link : https://codeforces.com/contest/1907/problem/A
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
    string s;
    cin>>s;
    char first = s[0];
    char second = s[1];
    int x = second -'0';
    for(int i=1; i<=8; i++)
    {
        if(i!=x)
        {
            cout<<first<<i<<endl;
        }
    }

    for(char i='a'; i<='h'; i++)
    {
        if(i!=first)
        {
            cout<<i<<second<<endl;
        }
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