                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. GCD Problem
Problem link : https://codeforces.com/problemset/problem/1617/B
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
    int n, a;
    cin >> n;
    a = (n-1)/2;
    if(n % 2 == 0)
    {
        cout << a << " " << a+1 << " " << 1 << endl;
    }
    else
    {
        vector<int>v={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53};
        for(int i=0; i<v.size(); i++)
        {
            if((n-1-v[i])%v[i]!=0)
            {
                cout<<v[i]<<" "<<(n-1-v[i])<<" "<<1<<endl;
                return;
            }
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


                                                                     ///ALHAMDULILLAH