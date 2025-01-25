                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : C. Turtle Fingers: Count the Values of k
Problem link : https://codeforces.com/contest/1933/problem/C
Platform     : Codeforces
Author       : Md. Raju Miah
*/
#include<bits/stdc++.h>
using namespace std;


#define Raju ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define pb push_back
#define mod 1000000007
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define all(x) (x).begin(), (x).end()

void solve()
{
    int a, b, l;
    cin >> a >> b >> l;
    
    set<int> s;
    while (true) 
    {
        int x = l;
        while (true) 
        {
            s.insert(x);
            if (x % b != 0) 
            {
                break;
            }
            x /= b;
        }
        if (l % a != 0) 
        {
            break;
        }
        l /= a;
    }
    cout << s.size() << "\n";
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