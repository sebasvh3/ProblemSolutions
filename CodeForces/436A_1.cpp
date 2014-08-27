#include<bits/stdc++.h>
using namespace std;
#define IO ios_base::sync_with_stdio(false);cin.tie(NULL)

#define endl "\n"
#define D(x) cout << #x << " : " << x << "  "
#define l cout << endl
#define in freopen("in","r",stdin)

#define For(i,a)    for(int i=0; i<a; i++)
#define Fori(i,a,b) for(int i=a; i<b; i++)
#define pb push_back
#define mp make_pair
#define all(x)  x.begin(),x.end()
#define allr(x) x.rbegin(),x.rend()

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii > vpii;
typedef long long int llint;

bool compare(pii a, pii b){
    return a.second < b.second;
}


int recorrido(vpii x, vpii y, int ini) {
    
    pii actual;
    bool fin =false;
    bool fila =true;
    int num=0;
    while(true) {
        //search first in y
        if(fila) {
            int pos = 0, max = 0;
            For(i, y.size()) {
                if(ini >= y[i].first /*y[i].second>=max*/) {
                    if(y[i].second > max){
                        actual = y[i];
                        max = y[i].second;
                        pos=i;
                    }
                }
                else break;
            }
            if(!max){
                fin=true;
            } 
            if(y.size()>0) y.erase(y.begin()+pos);
            fila=false;
        }
        else {
            int pos2 = 0, max = 0;
            For(i, x.size()) {
                if(ini >= x[i].first /*and x[i].second>=max*/) {
                    if(x[i].second > max) {
                        actual = x[i];
                        max = x[i].second;
                        pos2=i;
                    }
                }
                else break;
            }
            if(!max){
                fin=true;
            } 
            if(x.size()>0) x.erase(x.begin()+pos2);
            fila=true;
        }
        
        if(fin) break;
        else num++;
        ini+=actual.second;
    }
    return num;
}

int main() { IO;
    int n,x,t,h,m;
    
    cin>>n>>x;
    vpii caram,fruit; 
    For(i,n) {
        cin>>t>>h>>m;
        if(t==0) caram.pb(mp(h,m));
        else fruit.pb(mp(h,m));
    }
    
    sort(all(caram));
    sort(all(fruit));
    
    int s1 = recorrido(caram,fruit,x);

    int s2 = recorrido(fruit,caram,x);

    s1>s2 ? cout<<s1<<endl : cout<<s2<<endl;
    
    
//    cout<<"sol1: "<<s1<<endl;
//    cout<<"sol2: "<<s2<<endl;
//    
//    
//    cout<<"n:"<<n;l;
//    cout<<"x:"<<x;l;l;
//    
//    cout<<"tam caram: "<<caram.size()<<endl;
//    cout<<"tam fruit: "<<fruit.size()<<endl;
//    
//    
//    cout<<endl<<"Caram"<<endl;
//    For(i,caram.size()) {
//        cout<<caram[i].first<<","<<caram[i].second<<endl;
//    }
//    
//    cout<<"-------------"<<endl;
//    cout<<"-------------"<<endl;
//    cout<<"-------------"<<endl;
//    cout<<endl<<"fruit"<<endl;
//    
//    For(i,fruit.size()) {
//        cout<<fruit[i].first<<","<<fruit[i].second<<endl;
//    }
//    
}
