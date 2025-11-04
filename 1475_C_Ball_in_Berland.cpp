                                                            // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : C. Ball in Berland
Problem link : https://codeforces.com/problemset/problem/1475/C
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

void raju()
{
    ll a, b, k;
    cin>>a>>b>>k;
    vector<ll>boys(k),girls(k), badb(a+1,0), badg(b+1,0);
    for(ll i=0; i<k; i++)
    {
        cin>>boys[i];
    }
    for(ll i=0; i<k; i++)
    {
        cin>>girls[i];
    }

    for(ll i=0; i<k; i++)
    {
        if(boys[i]<=a)
        {
            badb[boys[i]]++;
        }
        if(girls[i]<=b)
        {
            badg[girls[i]]++;
        }
    }
    ll bd=0;
    for(ll i=1; i<=a; i++)
    {
        bd+= (1LL * badb[i] * (badb[i]-1))/2;
    }
    for(ll i=1; i<=b; i++)
    {
        bd+= (1LL * badg[i] * (badg[i]-1))/2;
    }

    ll gd = 1LL*k*(k-1)/2;
    cout<<gd-bd<<endl;

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