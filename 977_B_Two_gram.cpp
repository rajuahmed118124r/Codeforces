                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Two-gram
Problem link : https://codeforces.com/problemset/problem/977/B
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
    string s,ans;
    cin>>s;
    int count=0, result=0;
    for(int i=0; i<n-1; i++)
    {
        count=0;
        for(int j=0; j<n-1; j++)
        {
            if(s[i]==s[j] && s[i+1]==s[j+1])
            {
                count++;
                if(result<count)
                {
                    result = count;
                    ans = string(1, s[i]) + string(1, s[i+1]);
                }
            }
        }
    }
    cout<<ans<<endl;
}


int main()
{
    Raju;
    solve();
return 0;
}


                                                                     ///ALHAMDULILLAH