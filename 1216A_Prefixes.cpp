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
    int n, count=0;
    cin>>n;
    string s;
    cin>>s;
    vector<char>v;
    for(int i=0; i<s.size()-1; i++)
    {
        if(i+1<=n)
        {
            if(s[i]=='a' && s[i+1]=='b')
            {
                v.pb('a');
                v.pb('b');
                i++;
            }
            else if(s[i]=='b' && s[i+1]=='a')
            {
                v.pb('b');
                v.pb('a');
                i++;
            }
            else if(s[i]!='a' && s[i+1]=='b')
            {
                v.pb('a');
                v.pb('b');
                i++;
                count++;
            }
            else if(s[i]=='a' && s[i+1]!='b')
            {
                v.pb('a');
                v.pb('b');
                i++;
                count++;
            }
        }
    }
    cout<<count<<endl;
    if(count==0)
    {
        cout<<s<<endl;
    }
    else{
        for(char x:v)
        {
            cout<<x;
        }
        cout<<endl;
    }
    
}


int main()
{
    Raju;
    solve();
return 0;
}


                                                                     ///ALHAMDULILLAH