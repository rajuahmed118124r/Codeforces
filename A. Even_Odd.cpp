#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a,k,c;
    cin>>a>>k;
    if(a%2==0)
    {
        c = a/2;
    }
    else{
        c = (a+1)/2;
        }
    if(k<=c)
    {
        cout<<(2*k-1)<<"\n";
    }
    else{
        cout<<(k-c)*2<<"\n";
    }

    return 0;
}
