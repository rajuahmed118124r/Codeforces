#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,c;
        cin>>n;
        a=n/3;
        b=a;
        c=a;
        int x=n%3;
        x=x+3;
        a--;
        b--;
        c--;
        if(x==3)a=a+2,b++;
        else if(x==4)a=a+3,b++;
        else if(x==5)a=a+3,b=b+2;
        cout<<b<<" "<<a<<" "<<c<<"\n";
    }
    return 0;
}
