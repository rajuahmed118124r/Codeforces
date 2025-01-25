                                                            ///BISMILLAHIR RAHMANIR RAHIM
                                                           //============================

/*
 Problem name : A. Sasha and Array Coloring
 Problem link : https://codeforces.com/contest/1843/problem/A
 Platform     : Codeforces
 Author       : Md. Raju Miah
*/
#include<bits/stdc++.h>
using namespace std;

#define Raju ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define pb push_back


void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    int sum = 0, sum1 = 0;
    for(int i = 0; i < n / 2; i++)
    {
        sum += v[i];
    }
    if(n%2==0)
    {
        for(int i = n / 2; i < n; i++)
        {
            sum1 += v[i];
        }
    }
    else{
         for(int i = (n/2 +1); i < n; i++)
        {
            sum1 += v[i];
        }
    }

    cout << sum1 - sum << "\n";
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
