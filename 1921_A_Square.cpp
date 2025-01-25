                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Square
Problem link : https://codeforces.com/contest/1921/problem/0
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
    vector<int>v(4), v1(4);
    for (int i = 0; i < 4; ++i) 
    {
        cin >> v[i] >> v1[i];
    }
    sort(v.begin(), v.end());
    sort(v1.begin(), v1.end());
    int a = max(v[2] - v[1], v1[2] - v1[1]);
    int area = a * a;
    cout << area << endl;
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