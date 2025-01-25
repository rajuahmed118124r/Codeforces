                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : D. Find the Different Ones!
Problem link : https://codeforces.com/contest/1927/problem/D
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
    cin>>n;
    vector<int>v(n), v1;
    int last = -1;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        if(v[i]!=last)
        {
            v1.pb(i+1);
            last = v[i];
        }
    }

    int q;
    cin>>q;
    while(q--)
    {
        int l, r;
        cin>>l>>r;
        int idx1 = -1, low = 0, high = v1.size()-1;
        while(low<=high)
        {
            int mid = low + (high-low)/2;
            if(v1[mid]<=l)
            {
                idx1 = mid;
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        if(idx1==v1.size()-1 || v1[idx1+1]>r)
        {
            cout<<"-1 -1"<<endl;
        }
        else{
            int ans1= max(v1[idx1], l);
            int ans2 = min(v1[idx1+1], r);
            cout<<ans1<<" "<<ans2<<endl;
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
