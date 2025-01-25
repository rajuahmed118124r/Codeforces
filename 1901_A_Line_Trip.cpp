                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Line Trip
Problem link : https://codeforces.com/contest/1901/problem/0
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
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int mx = INT_MIN;
    int indx = v[0];
    for (int i =1; i<n; i++)
    {
        indx = max(indx, (v[i] - v[i - 1]));
    }
    for (int i =0; i<n; i++)
    {
        mx = max(mx,v[i]);
    }
    int mXX = max(indx, 2*(x - mx));
    cout << mXX << endl;
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