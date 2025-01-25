                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Sum of Two Numbers
Problem link : https://codeforces.com/problemset/problem/1788/B
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
    if(n%2==0)
    {
        cout<<n/2<<" "<<n/2<<endl;
    }
    else{
        int a = n/2, b = n - n/2;
        int c =0;
        while(a%10==9)
        {
            a/=10;
            c++;
        }
        string s = to_string(a);
        int i=0;
        while(i<c)
        {
            if(i%2==0)
            {
                s+='5';
            }
            else{
                s+='4';
            }
            i++;
        }
        int z = stoi(s);
        cout<<z<<" "<<n-z<<endl;
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