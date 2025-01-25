                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Sum of Digits
Problem link : https://codeforces.com/contest/102/problem/B
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
    int count=0;
    while(s.size()!=1)
    {
        int sum=0;
        for(int i=0; i<s.size(); i++)
        {
            sum+=s[i]-'0';
        }
        s = to_string(sum);
        count++;
    }
    cout<<count<<endl;
}


int main()
{
    Raju;
    solve();
return 0;
}


                                                                     ///ALHAMDULILLAH