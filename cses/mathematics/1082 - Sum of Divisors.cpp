#include<bits/stdc++.h>
using namespace std;
const long long N = 1e9+7;
long long rangesum(long long l,long long r){
	long long n=(r-l+1)%N;
	long long sum=(((l%N+r%N))%N*(n%N))%N;
	if(sum%2==0){
		sum=sum/2;
	}else{
		sum=(sum+N)/2;
	}
	return sum%N;
}
int main(){
	long long n;
	cin>>n;
	long long d=1;
	long long sum=0;
	while(d<=n){
		long long q=n/d;
		long long r=n/q;
		sum=(sum+((q%N)*rangesum(d,r))%N)%N;
		d=r+1;
	}
	cout<<(sum)%N<<endl;
}