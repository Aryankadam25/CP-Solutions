#include<bits/stdc++.h>
using namespace std;
const long long N = 1e9 + 7;
int solve(long long a,long long b,long long mod){
	if(b==0){
		return 1;
	}
	long long x = solve(a,b/2,mod)%mod;
	if(b%2){
		return (((x*x)%mod)*(a%mod))%mod;
	}else{
		return (x*x)%mod;
	}
}

int main(){	
	int n;
	cin>>n;
	while(n--){
		long long a,b,c;
		cin>>a>>b>>c;
		long long exp=solve(b,c,N-1);
		cout<<solve(a,exp,N)<<"\n";
	}
}


//note : from fermats little principle
// (a^k)%p=(a^(k%{p-1)))%p

// fermats little theorem
// a^(p-1) is congruent to 1(mod p)

// congruent def:
// a congruent b % p == p|(a-b)

