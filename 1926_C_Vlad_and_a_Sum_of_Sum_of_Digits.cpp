                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : C. Vlad and a Sum of Sum of Digits
Problem link : https://codeforces.com/contest/1926/problem/C
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


ll digit_sum(ll n) 
{
    ll sum = 0;
    while (n > 0) 
    {
        sum += n % 10;  
        n /= 10;        
    }
    return sum;
}

void solve(vector<ll>&pre_sum)
{   
    ll n;
    cin >> n;
    cout << pre_sum[n] << endl;
}


int main()
{
    Raju;
    int t;
    cin>>t;
    vector<ll> pre_sum(2e5 + 10, 0);
    for (int i = 1; i <= 2e5 + 10; i++) 
    {
        pre_sum[i] = pre_sum[i - 1] + digit_sum(i); 
    }
    while(t--)
    {
        solve(pre_sum);
    }
return 0;
}


                                                                     ///ALHAMDULILLAH


