                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. 3-palindrome
Problem link : https://codeforces.com/problemset/problem/805/B
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
    if(n==1)
    {
        cout<<"a"<<endl;
    }
    else{
        while(n)
        {
            cout<<"a";
            n--;
            if(n==0)break;
            cout<<"a";
            n--;
            if(n==0)break;
            cout<<"b";
            n--;
            if(n==0)break;
            cout<<"b";
            n--;
            if(n==0)break;
        }
        cout<<endl;
    }
}


int main()
{
    Raju;
    solve();
return 0;
}


                                                                     ///ALHAMDULILLAH