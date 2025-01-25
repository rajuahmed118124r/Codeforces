                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Sushi for Two
Problem link : https://codeforces.com/contest/1138/problem/A
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
    int ans =-1;
    for(int i=0; i<n-1; i++)
    {
        if(v[i] != v[i+1])
        {
            int j = i; int k = i+1;
            while(j>=0 && k<n && v[j] == v[i] && v[k] == v[i+1])
            {
                j--;
                k++;
            }
            ans = max(ans, k - j - 1);
        }
    }
    cout<<ans<<endl;
    
}


int main()
{
    Raju;
    solve();
return 0;
}


                                                                     ///ALHAMDULILLAH