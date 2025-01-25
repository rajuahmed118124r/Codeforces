                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                            ///============================
/*
Problem name : B. Vlad and Shapes
Problem link : https://codeforces.com/contest/1926/problem/B
Platform     : Codeforces
Author       : Md.Raju Miah
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
    char a[n][n];
    vector<int> v;

    for(int i = 0; i < n; i++) 
    {
        for(int j = 0; j < n; j++) 
        {
            cin >> a[i][j];
        }
    }

    int one = 0, zero = 0;
    for(int i = 0; i < n; i++) 
    {
        for(int j = 0; j < n; j++) 
        {
            if(a[i][j] == '1') 
            {
                one++;
            }
        }
        if(one > 0) 
        {
            v.push_back(one);
        }
        one = 0;
    }

    sort(v.begin(), v.end());
    for(int i = 0; i < v.size() - 1; i++) 
    {
        if(abs(v[i] - v[i + 1]) > 0) 
        {
            zero++;
            break;
        }
    }

    if(zero == 0) 
    {
        cout << "SQUARE" << endl;
    } 
    else {
        cout << "TRIANGLE" << endl;
    }
}

int main() 
{
    Raju;
    int t;
    cin >> t;
    while(t--) 
    {
        solve();
    }
    return 0;
}



                                                                     ///ALHAMDULILLAH
