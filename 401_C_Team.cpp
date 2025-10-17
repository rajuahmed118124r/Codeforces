                                                            // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : C. Team
Problem link : https://codeforces.com/problemset/problem/401/C
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
// #define zero cout<<0<<endl
#define all(x) (x).begin(), (x).end()

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
const int N = 1e3;
char maze[N][N];
int visited[N][N];
int zero, one, k, l=1;

void raju()
{
    
    cin>>zero>>one;
    if(one<zero-1 || one>2*(zero+1))
    {
        cout<<-1<<endl;
        return;
    }

    while(zero || one)
    {
        if((one>zero && k<2) || l==0)
        {
            cout<<1;
            one--;
            l=1;
            k++;
        }
        else{
            cout<<0;
            zero--;
            l=0,k=0;
        }
    }
    cout<<endl;
}

int main()
{
    Raju;
    int t=1;
    // cin>>t;
    while(t--)
    {
        raju();
    }
  return 0;
}
                                                                //ٱلْحَمْدُ لِلَّٰهِ