                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Is it easy?
Problem link : https://codeforces.com/gym/398095/problem/B
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
    double a,b;
    std::cin>>a>>b;
    double ans1 = (a+b)*std::log(3);
    double ans2 = 3*std::log(a+b);
    //cout<<ans1<<" "<<ans2<<endl;
    if(ans1>ans2)
    {
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }

}


int main()
{
    Raju;
    solve();
return 0;
}


                                                                     ///ALHAMDULILLAH