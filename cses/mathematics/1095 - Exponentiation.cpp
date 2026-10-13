#include<bits/stdc++.h>
using namespace std;
const long long N = 1e9 + 7;
int solve(long long a,long long b){
	if(b==0){
		return 1;
	}
	long long x = solve(a,b/2)%N;
	if(b%2){
		return (((x*x)%N)*(a%N))%N;
	}else{
		return (x*x)%N;
	}
}
int main(){
	int n;
	cin>>n;
	while(n--){
		long long a,b;
		cin>>a>>b;
		cout<<solve(a,b)<<"\n";
	}
}