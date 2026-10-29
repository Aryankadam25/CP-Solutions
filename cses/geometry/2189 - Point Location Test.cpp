#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long x1,y1,x2,y2,x3,y3;
		cin>>x1>>y1>>x2>>y2>>x3>>y3;
		long long cross=(x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1);
		if(cross == 0){
            cout << "TOUCH\n";
        } else if(cross < 0){
            cout << "RIGHT\n";
        } else {
            cout << "LEFT\n";
        }
	}
}