                                                            // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : C. Number Game
Problem link : https://codeforces.com/problemset/problem/1370/C
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
const int N = 1e7;
vector<bool>v(N+1,true);

bool isPrime(ll n)
{
    if(n<2)return false;
    for(ll i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

void raju()
{
    ll n;
    cin>>n;
    if(n==1)
    {
        cout<<"FastestFinger"<<endl;
        return;
    }
    if(n==2 || n%2==1)
    {
        cout<<"Ashishgup"<<endl;
        return;
    }

    if((n&(n-1))==0 || isPrime(n/2))
    {
        cout<<"FastestFinger"<<endl;
    }
    else{
        cout<<"Ashishgup"<<endl;
    }

}

int main()
{
    Raju;
    int t;
    cin>>t;
    while(t--)
    {
        raju();
    }
  return 0;
}
                                                                //ٱلْحَمْدُ لِلَّٰهِ