                                                            // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : A. Square of Rectangles
Problem link : https://codeforces.com/problemset/problem/2120/A
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
    int l1,b1,l2,b2,l3,b3;
    cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;

    int total = l1*b1 + l2*b2 + l3*b3;
    int S = floor(sqrt(total) + 0.5);
    if (S*S != total) 
    {
        cout << "NO\n";
        return;
    }

    bool ok = false;
    if (l1==S && l2==S && l3==S && b1+b2+b3==S) ok=true;
    if (b1==S && b2==S && b3==S && l1+l2+l3==S) ok=true;
    if (!ok && l1==S) 
    {
        int h = S - b1;
        if (h>0 && b2==h && b3==h && l2+l3==S) ok = true;
    }
    if (!ok && b1==S) 
    {
        int w = S - l1;
        if (w>0 && l2==w && l3==w && b2+b3==S) ok = true;
    }

   if(ok)
   {
        cout<<"YES"<<endl;
        return;
   }
   cout<<"NO"<<endl;
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