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
    //cad1="WUBWUBUNOWUBWUBDOSWUBWUBTRESWUBCUATROWUB";
    int pos=0,sig=0,pent=0;
    string word="";
    pos = cad1.find("WUB");
    
    if(pos!=0){ word = cad1.substr(0,pos)+" ";}
    while(pos!= string::npos){
        sig = cad1.find("WUB",pos+1);
        if((sig-pos) > 3){
            word+=cad1.substr(pos+3,(sig-pos-3))+" ";
        }
        if(sig == string::npos){
            word+=cad1.substr(pos+3,(cad1.size()-pos-3));
        } 
        pos = sig;
    }        
    cout<<word<<endl;
     
}

