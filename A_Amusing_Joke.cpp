                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Amusing Joke
Problem link : https://codeforces.com/problemset/problem/141/A
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
    string s1,s2,s3,s4;
    cin>>s1>>s2>>s3;
    s4 = s1 + s2;
    sort(s3.begin(), s3.end());
    sort(s4.begin(), s4.end());
    //cout<<s3<<endl<<s4;
    if(s3==s4)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}


int main()
{
    Raju;
    solve();
return 0;
}


                                                                     ///ALHAMDULILLAH