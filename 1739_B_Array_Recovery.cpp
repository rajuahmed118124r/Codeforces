                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Array Recovery
Problem link : https://codeforces.com/problemset/problem/1739/B
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
    int n;
    cin >> n;
    vector<int> v(n), ans(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> v[i];
    }
    ans[0] = v[0];

    for (int i = 1; i < n; i++) 
    {
        bool f = false;
        int ans1 = -1;
        for (int j = 0; j <= 300; j++) 
        {
            if (abs(j - ans[i - 1]) == v[i]) 
            {
                if (!f) 
                {
                    ans1 = j;
                    f = true;
                } 
                else {
                    cout << -1 << endl;
                    return;
                }
            }
        }
        ans[i] = ans1;
    }
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
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