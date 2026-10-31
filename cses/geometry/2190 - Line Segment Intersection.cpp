#include<bits/stdc++.h>
using namespace std;
int ori(long long x1,long long y1,long long x2,long long y2,long long x3,long long y3){
	long long cross = (x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1);
	if(cross>0) return 1;
	else if(cross<0) return -1;
	return 0;
}
int onSeg(long long x1,long long y1,long long x2,long long y2,long long x3,long long y3){
	if(x3<=max(x1,x2) && x3>= min(x1,x2) && y3<=max(y1,y2) && y3>=min(y1,y2)) return 1;
	return 0;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long x1,y1,x2,y2,x3,y3,x4,y4;
		cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
		int o1=ori(x1,y1,x2,y2,x3,y3);
		int o2=ori(x1,y1,x2,y2,x4,y4);
		int o3=ori(x3,y3,x4,y4,x1,y1);
		int o4=ori(x3,y3,x4,y4,x2,y2);
		if(o1!=o2 && o3!=o4) cout<< "YES"<<endl;
		else if(o1==0 && onSeg(x1,y1,x2,y2,x3,y3)) cout<<"YES"<<endl;
		else if(o2==0 && onSeg(x1,y1,x2,y2,x4,y4)) cout<<"YES"<<endl;
		else if(o3==0 && onSeg(x3,y3,x4,y4,x1,y1)) cout<<"YES"<<endl;
		else if(o4==0 && onSeg(x3,y3,x4,y4,x2,y2)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}