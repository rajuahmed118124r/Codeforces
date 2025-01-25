                                                            ///BISMILLAHIR RAHMANIR RAHIM
                                                           //============================

/*
 Problem name : A. Expression
 Problem link : https://codeforces.com/contest/479/problem/A
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
    int a, b, c;
    cin>>a>>b>>c;
    int max_value = a+b+c;
    max_value = max(max_value, a*b*c);
    max_value = max(max_value, a+b*c);
    max_value = max(max_value, a*b+c);
    max_value = max(max_value, (a+b)*c);
    max_value = max(max_value, a*(b+c));
    cout<<max_value<<"\n";
}


int main()
{
    Raju;

    solve();

    return 0;
}
                                                                //ALHAMDULILLAH
