                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Rating Increase
Problem link : https://codeforces.com/contest/1913/problem/0
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
    for (int i = 1; i < s.size(); ++i)
    {
        string a_str = s.substr(0, i);
        string b_str = s.substr(i);
        if (a_str[0] != '0' && b_str[0] != '0' && stoi(b_str) > stoi(a_str)) 
        {
            cout << a_str << " " << b_str << endl;
            return;
        }
    }
    cout << "-1" << endl;

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