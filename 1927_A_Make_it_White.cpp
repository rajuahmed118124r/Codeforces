                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Make it White
Problem link : https://codeforces.com/contest/1927/problem/A
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

int seg(int n, string s) 
{
    int lblack = s.find('B'); 
    int rblack = s.rfind('B'); 
    return rblack - lblack + 1;
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s; 
    cout << seg(n, s) << endl;
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