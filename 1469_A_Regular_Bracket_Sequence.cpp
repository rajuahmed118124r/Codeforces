                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Regular Bracket Sequence
Problem link : https://codeforces.com/contest/1469/problem/A
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
    string s;
    cin>>s;
    if(s.size()%2==0 && s[0]!=')' && s[s.size()-1]!='(')
    {
        yes;
    }
    else{
        no;
    }
}

//another solution
/*
void solve()
{
    string s;
    cin>>s;
    int rb=0, lb=0, q=0, n = s.size();
    for(int i=0; i<n; i++)
    {
        if(s[i]==')')rb++;
        else if(s[i]=='(')lb++;
        else q++;
    }
    if(n%2==0 && s[0]!=')' && s[n-1]!='(' && (lb+q==rb || rb+q==lb || rb==lb))
    {
        yes;
    }
    else{
        no;
    }
}
*/



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