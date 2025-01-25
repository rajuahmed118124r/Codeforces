                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : C. Book Reading
Problem link : https://codeforces.com/problemset/problem/1213/C
Platform     : Codeforces
Author       : Md. Raju Miah
*/
#include<bits/stdc++.h>
using namespace std;


#define Raju ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define pb push_back
#define all(x) (x).begin(), (x).end()

ll digit_sum(ll m)
{
    ll sum =0;
    for(int i =1; i<=10; i++)
    {
        sum+=(i*m)%10;
    }
    return sum;
}

void solve()
{
    ll n, m;
    cin >> n >> m;
    
    ll fblock = n/(m*10);
    ll rblock = n%(m*10);
    ll total_sum = fblock * digit_sum(m);
    
    for(int i=1; i<=rblock/m; i++)
    {
        total_sum+=(i*m)%10;
    }
    cout << total_sum << endl;
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