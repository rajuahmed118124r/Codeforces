                                                            ///BISMILLAHIR RAHMANIR RAHIM
                                                            //============================
/*
Problem name : B. Normal Problem 
Problem link : 
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
    reverse(s.begin(), s.end());
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='p')
        {
            s[i]='q';
        }
        else if(s[i]=='q')
        {
            s[i]='p';
        }
    }
    cout<<s<<endl;
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