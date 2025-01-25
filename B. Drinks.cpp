                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Drinks
Problem link : https://www.youtube.com/watch?v=2ZzhY7wVxsE
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
    double sum =0;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    cout<<sum/n<<endl;
}


int main()
{
    Raju;

    solve();

return 0;
}


                                                                     ///ALHAMDULILLAH