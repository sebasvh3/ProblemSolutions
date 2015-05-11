#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,p,q;
	cin>>n;
	int nh=0;
	while(n--) {
		cin>>p>>q;
		if(q-p>=2) nh++;
	}
	cout <<nh<<endl;
}
