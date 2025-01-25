                                                            ///BISMILLAHIR RAHMANIR RAHIM
                                                           ///============================
/*
Problem name : A. Tram
Problem link : https://codeforces.com/problemset/problem/116/A
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
    vector<int>v;
    int a, b, pass=0;
    for(int i=0; i<n; i++)
    {

        cin>>a>>b;
        pass = pass -a;
        pass = pass+b;
        v.pb(pass);
    }
    //for(auto x:v)
    //{
    //    cout<<x<<" ";
    //}
   //cout<<endl;
    cout<<*max_element(v.begin(), v.end())<<endl;
}


int main()
{
    Raju;

    solve();
return 0;
}


                                                                     ///ALHAMDULILLAH
