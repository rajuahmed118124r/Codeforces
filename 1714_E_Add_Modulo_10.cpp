                                                            ///BISMILLAHIR RAHMANIR RAHIM
                                                            //============================
/*
Problem name : E. Add Modulo 10
Problem link : https://codeforces.com/problemset/problem/1714/E
Platform     : Codeforces
Author       : Md. Raju Miah
*/
#include<bits/stdc++.h>
using namespace std;
#define Raju ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define pb push_back
#define all(x) (x).begin(), (x).end()

bool possible(int x, int mx)
{
    int tmp = x;
    vector<int>v;
    while(tmp-x<=20)
    {
        if(tmp==mx)
        {
            return true;
        }
        if(tmp%10==0)break;
        v.pb(tmp);
        tmp+=(tmp%10);
    }

    for(auto hi:v)
    {
        if(hi<mx)
        {
            int diff = mx - hi;
            if(diff%20==0)
            {
                return true;
            }
        }
    }
    return false;

}

void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        if(v[i]%2==1)
        {
            v[i]+=(v[i]%10);
        }
    }
    int mx = *max_element(v.begin(), v.end());

    for(int i=0; i<n; i++)
    {
        if(!possible(v[i],mx))
        {
            cout<<"No"<<endl;
            return;
        }
    }
    cout<<"Yes"<<endl;  
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