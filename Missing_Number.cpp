#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
    //xor of the same elements is zero, that concept is used here.
	int n,xr=0,tmp;
	cin>>n;
	for(int i=0;i<n-1;i++){
		cin>>tmp;
		xr^=tmp;
	}
	for(int i=0;i<n;i++){
		xr^=i+1;
	}
	cout<<xr;

}