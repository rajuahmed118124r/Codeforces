                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name :
Problem link : https://codeforces.com/contest/1870/problem/A
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
        int n, k, x;
        cin >> n >> k >> x;
        int sum = 0;
        if (n < k || (x+1)<k)
        {
            cout << -1 << endl;
        }
        else if(n==k)
        {
                for (int i = 0; i < k; i++)
                {
                    sum += i;
                }
                int ext = n - k;
                if (k == x)
                {
                    sum = sum + (x - 1) * ext;
                }
                else
                {
                    sum = sum + (x * ext);
                }
                cout << sum << endl;
        }
        else {
            int val = k-x;
            if(val>1) cout<<-1<<endl;
            else {
                for (int i = 0; i < k; i++)
                {
                    sum += i;
                }
                int ext = n - k;
                if (k == x)
                {
                    sum = sum + (x - 1) * ext;
                }
                else
                {
                    sum = sum + (x * ext);
                }
                cout << sum << endl;
            }
        }
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


                                                                     ///ALHAMDULILLA