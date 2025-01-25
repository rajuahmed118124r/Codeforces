                                                            ///BISMILLAHIR RAHMANIR RAHIM
                                                           ///============================
/*
Problem name : A. Bear and Big Brother
Problem link : https://codeforces.com/problemset/problem/791/A
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
    int a, b,count=0;
    cin>>a>>b;

    while(a<=b)
    {
        a*=3;
        b*=2;
        count++;
    }
    cout<<count<<endl;
}


int main()
{
    Raju;
    int t;
    solve();
return 0;
}


                                                                     ///ALHAMDULILLAH
