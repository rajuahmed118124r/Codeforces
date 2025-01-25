                                                            ///BISMILLAHIR RAHMANIR RAHIM
                                                           ///============================
/*
Problem name : A. Word
Problem link : https://codeforces.com/problemset/problem/59/A
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
    int l=0, u=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            u++;
        }
        if(s[i]>='a' && s[i]<='z')
        {
            l++;
        }
    }
    if(u>l)
    {
        for(int i=0; i<s.size(); i++)
        {
            s[i] = toupper(s[i]);
        }
    }
    else{
        for(int i=0; i<s.size(); i++)
        {
            s[i] = tolower(s[i]);
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
