                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Remove Smallest
Problem link : https://codeforces.com/problemset/problem/1399/A
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
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    bool t =true;
    for(int i=1; i<n; i++)
    {
            if(abs(v[i]-v[i-1])>1)
            {
                t =false;
                break;
            }
    }
    if(t==false)
    {
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
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