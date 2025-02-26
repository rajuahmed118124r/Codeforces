                                                            ///BISMILLAHIR RAHMANIR RAHIM
                                                            //============================
/*
Problem name : A. Was there an Array?
Problem link : https://codeforces.com/problemset/problem/2069/A
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
    int n;
    cin>>n;
    vector<int>v(n-2);
    int p=1;
    for(int i=0; i<n-2; i++)
    {
        cin>>v[i];
    }

    if(n!=3)
    {
        for (int i = 0; i < n - 4; i++) 
        {
            if ((v[i] == 1 && v[i + 1] == 0 && v[i + 2] == 1)) 
            {
                p=0;
                break;
            }
        }
    }
    if(p==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
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