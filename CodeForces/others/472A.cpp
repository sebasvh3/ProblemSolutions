#include<bits/stdc++.h>
using namespace std;

bool esPrimo(int n) {
	if(n==1) return false;
	if(n==2 || n==3) return true;
	if(n%2==0) return false;
	//if(n%3==0) return false;
	int div = 5;
	while(div < sqrt(n)+1) {
		if(n%div == 0) return false;
		div+=2;	
	}
	return true;
}

int main() {
	int n;
	cin>>n;
	if(n%2==0) cout << n/2<<" "<<n/2<<endl;
	else{
		int x = n/2;
		int y = n-x;
		while(){
			
		}  	
	}
	esPrimo(25);
	if()
	for(int i=0; i<=100; i++) {
		if(esPrimo(i)) {
				cout << i <<" SI"<<endl;
		}
		else {
				cout << i <<" NO"<<endl;
		}
	}
	cout<<"Hola mundo"<<endl;
}
