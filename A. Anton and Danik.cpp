                                                            ///BISMILLAHIR RAHMANIR RAHIM
                                                           ///============================
/*
Problem name : A. Anton and Danik
Problem link : https://codeforces.com/problemset/problem/734/A
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
    int a=0, d=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='a' || s[i]=='A')
        {
            a++;
        }
        if(s[i]=='d' || s[i]=='D')
        {
            d++;
        }
    }
    if(d>a)
    {
        cout<<"Danik"<<endl;
    }
    else if(a>d)
    {
        cout<<"Anton"<<endl;
    }
    else{
        cout<<"Friendship"<<endl;
    }
}


int main()
{
    Raju;
    solve();
return 0;
}


                                                                     ///ALHAMDULILLAH
