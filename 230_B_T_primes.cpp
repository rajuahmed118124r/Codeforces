                                                            // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : B. T-primes
Problem link : https://codeforces.com/problemset/problem/230/B
Platform     : Codeforces
Author       : Md. Raju Miah
*/
#include<bits/stdc++.h>
using namespace std;
#define Raju ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define pb push_back
#define yes cout<<'YES'<<endl
#define no cout<<'NO'<<endl
#define zero cout<<0<<endl
#define all(x) (x).begin(), (x).end()

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
const ll N = 1e6;
vector<bool>prime(N+1, true);

void isPrime()
{
    prime[0]=prime[1]=false;
    for(ll i=2; i*i<=N; i++)
    {
        if(prime[i])
        {
            for(int j=i*i; j<=N; j+=i)
            {
                prime[j]=false;
            }
        }
    }
}

bool ans(ll x)
{
    if(x<4)
    {
        return false;
    }
    ll y = sqrt(x);
    if((y*y)!=x)
    {
        return false;
    }
    return prime[y];
}


void raju()
{
    ll n;
    cin>>n;
    isPrime();
    for(ll i=0; i<n; i++)
    {
        ll x;
        cin>>x;
        if(ans(x)==true)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        // cout<<prime[6]<<endl;
    }

    
}

int main()
{
    Raju;
    int t=1;
    // cin>>t;
    while(t--)
    {
        raju();
    }
  return 0;
}
                                                                //ٱلْحَمْدُ لِلَّٰهِ