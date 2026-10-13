#include<bits/stdc++.h>
using namespace std;
int josephous(int n,int k){
	if(n==1){
		return 1;
	}
	if(k<=n/2){
		return 2*k;
	}
	int m=k-n/2;
	int temp = josephous((n + 1) / 2, m);

	if(n%2==0){
		return 2*(temp)-1;
	}else{
		if(temp==1){
			return n;
		}else{
			return 2*temp-3;
		}
	}
}
int main(){
	long long q;
	cin>>q;
	while(q--){
		long long n,k;
		cin>>n>>k;
		cout<<josephous(n,k)<<endl;
	}
}