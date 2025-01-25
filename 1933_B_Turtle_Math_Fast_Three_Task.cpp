                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Turtle Math: Fast Three Task
Problem link : https://codeforces.com/contest/1933/problem/B
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
    ll sum =0;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    if(sum%3==0)
    {
        cout<<0<<endl;
        return;
    }

    bool t = false;
    if(sum%3==1)
    {
        for(int i=0; i<n; i++)
        {
            if(v[i]%3==1)
            {
                t = true;
                break;
            }
        }
        if(t)
        {
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
    else{
            bool f = false;
            for(int i = 0; i < n; i++)
            {
                if(v[i] % 3 == 1 || v[i]%3==2)
                {
                    f = true;
                    break;
                }
            }
            if(f)
            {
                cout << 1 << endl;
            }
            else{
                cout << 2 << endl;
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