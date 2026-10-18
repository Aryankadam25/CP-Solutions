#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
		int x;
		cin>>x;
		int num_d=0;
		for(int i=1;i*i<=x;i++){
			if(x%i==0){
				if(i==x/i){
					num_d++;
				}else{
					num_d+=2;
				}
			}
		}
		cout<<num_d<<endl;
	}
}