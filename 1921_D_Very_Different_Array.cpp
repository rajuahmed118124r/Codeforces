                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : D. Very Different Array
Problem link : https://codeforces.com/contest/1921/problem/D
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
    int n,m;
    cin>>n>>m;
    vector<int> a(n), b(m);
    for (int i=0; i<n; i++) 
    {
        cin >> a[i];
    }
    for (int i=0; i<m; i++) 
    {
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll sum = 0;
    int la = 0, ra=n-1, lb = 0, rb = m-1;
    while(n--)
    {
        int x = abs(a[la] - b[rb]);
        int y = abs(a[ra] - b[lb]);
        if(x>y)
        {
            sum+=x;
            la++;
            rb--;
        }
        else{
            sum+=y;
            ra--;
            lb++;
        }
    }
    cout<<sum<<endl;
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