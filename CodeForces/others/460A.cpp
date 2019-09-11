#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,m,days;
	cin>>n>>m;
	//div = n/m;
	days = 0;
	while(true) {
		if(n>=m) {
			days+=m;
			n=n-m+1;
		}
		else {
			days+=n;
			break;
		}	
	}
	cout<<days<<endl;
}

