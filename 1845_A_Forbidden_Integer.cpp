                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Forbidden Integer
Problem link : https://codeforces.com/problemset/problem/1845/A
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
    cin>>n>>k>>x;
    if(k==1)
    {
        cout<<"NO\n";
    }
    else{
        if(x==1)
        {
            if(n%k==0)
            {
                cout<<"YES\n";
                cout<<n/k<<endl;
                for(int i=0; i<n/k; i++)
                {
                    cout<<k<<" ";
                }
                cout<<endl;
            }
            else if(n%k!=0)
            {
                if(n%2==0)
                {
                    cout<<"YES\n"<<n/2<<endl;
                    for(int i=0; i<n/2; i++)
                    {
                        cout<<2<<" ";
                    }
                    cout<<endl;
                }
                else{
                    if(k>2)
                    {
                        cout<<"YES\n"<<(n/2)<<endl;
                        for(int i=0; i<(n/2)-1; i++)
                        {
                            cout<<2<<" ";
                        }
                        cout<<3<<endl;
                    }
                    else{
                        cout<<"NO"<<endl;
                    }
                }
            }
        }
        else{
            cout<<"YES\n"<<n<<endl;
            for(int i=0; i<n; i++)
            {
                cout<<1<<" ";
            }
            cout<<endl;
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