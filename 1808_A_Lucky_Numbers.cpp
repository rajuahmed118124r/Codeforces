                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Lucky Numbers
Problem link : https://codeforces.com/contest/1808/problem/A
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
    int l, r;
    cin>>l>>r;
    int mx =0, ans=l;
    for(int i=l; i<=r; i++)
    {
        string s = to_string(i);
        sort(s.begin(), s.end());
        int curr = s[s.size()-1]-s[0];
        if(curr>mx)
        {
            mx = curr;
            ans = i;
        }
        if(mx==9)break;
    }
    cout<<ans<<endl;
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