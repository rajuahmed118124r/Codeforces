                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : D. XOR Construction
Problem link : https://codeforces.com/contest/1895/problem/D
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
	vector<int> a(n);
	for(int i=1;i<n;i++){
		cin>>a[i];
		a[i]^=a[i-1];
	}
	int x=0;
	for(int i=0;i<=20;i++){
		int cnt=0,tot=0;
		for(int j=0;j<n;j++){
			cnt+=j>>i&1;
			tot+=a[j]>>i&1;
		}
		if(cnt!=tot){
			x|=1<<i;
		}
	}
	for(int i=0;i<n;i++){
		cout<<(a[i]^x)<<" \n"[i==n-1];
	}
}


int main()
{
    Raju;
    solve();
return 0;
}


                                                                     ///ALHAMDULILLAH