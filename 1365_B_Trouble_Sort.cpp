                                                            // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : B. Trouble Sort
Problem link : https://codeforces.com/problemset/problem/1365/B
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
const int N = 1e3;
char maze[N][N];
int visited[N][N];

void hehe()
{
    int n;
    cin>>n;
    vector<int>v(n), bin(n), v2;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>bin[i];
    }
    bool has_zero = false, has_one = false;
    for (int x : bin) 
    {
        if (x == 0) has_zero = true;
        if (x == 1) has_one = true;
    }

    if (has_zero && has_one) 
    {
        cout<<"Yes"<<endl;
        return;
    }
    v2 = v;
    sort(v2.begin(), v2.end());
    if(v==v2)
    {
        cout<<"Yes"<<endl;
        return;
    }
    cout<<"No"<<endl;


}

int main()
{
    Raju;
    int t;
    cin>>t;
    while(t--)
    {
        hehe();
    }
  return 0;
}
                                                                //ٱلْحَمْدُ لِلَّٰهِ