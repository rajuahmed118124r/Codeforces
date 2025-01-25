                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Police Recruits
Problem link : https://codeforces.com/problemset/problem/427/A
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
    int n;
    cin>>n;
    int p=0,c=0;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        if(x>0)
        {
            p+=x;
        }
        else{
            if(p<1)
            {
                c++;
            }
            else{
                p--;
            }
        }
    }
    cout<<c<<endl;
}


int main()
{
    Raju;
    solve();
return 0;
}


                                                                     ///ALHAMDULILLAH