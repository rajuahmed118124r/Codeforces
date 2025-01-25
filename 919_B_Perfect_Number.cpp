                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Perfect Number
Problem link : https://codeforces.com/problemset/problem/919/B
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

int is_ten(int n)
{
    int x=0;
    while(n)
    {
        x+=n%10;
        n/=10;
    }
    return x;
}

void solve()
{
    int n;
    cin>>n;
    int cnt=0;
    for(int i=19;; i+=9)
    {
        if(is_ten(i)==10)
        {
            cnt++;
            if(cnt==n)
            {
                cout<<i<<endl;
                return;
            }
        }
    }
}


int main()
{
    Raju;
    int t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }
return 0;
}


                                                                     ///ALHAMDULILLAH