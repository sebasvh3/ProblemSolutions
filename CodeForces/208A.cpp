// to_string example
//#include <iostream>   // std::cout
//#include <string>     // std::string, std::to_string
//
//int main ()
//{
//  std::string pi = "pi is " + std::to_string(3.1415926);
//  std::string perfect = std::to_string(1+2+4+7+14) + " is a perfect number";
//  std::cout << pi << '\n';
//  std::cout << perfect << '\n';
//  return 0;
//}


#include<bits/stdc++.h>
#include<string>
using namespace std;
#define IO ios_base::sync_with_stdio(false);cin.tie(NULL)

#define endl "\n"
#define D(x) cout << #x << " : " << x << "  "
#define l cout << endl

#define For(i,a) for(int i=0; i<a; i++)
#define Fori(i,a,b) for(int i=a; i<b; i++)
#define Forn(i,a,b,c) for(int i=a; i<b; i+=c)
#define pb push_back
#define mp make_pair



int main() { IO;
    string cad1;
    cin >> cad1;
    int pos=0,sig=0;
    while(pos!= string::npos){
        pos = cad1.find("WUB",pos);
    }
    
    cad1="uno hola mundo, como vamos ps hola si señor hola: ";
    int n = cad1.find("WUB",29);
    int n2 = cad1.find("hola",30);
    int n3 = cad1.find("hola",31);
    int n4 = cad1.find("hola",46);
    cout << n<<endl;
    cout << n2<<endl;
    cout << n3<<endl;
    cout << n4<<endl;
    cout << cad1<<endl;
}

