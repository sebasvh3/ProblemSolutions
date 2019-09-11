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
    
    pii actual = x[0];
    //x.erase(x.begin());
    D(x[0].first);l;
    D(x[0].second);l;
    
    bool fin =false;
    bool fila =true;
    int num=0;
    while(true) {
       
        
        if(fila) cout<<"segundo"<<endl;
        else cout<<"primero"<<endl;
        
        //search first in y
        if(fila) {
            int pos = 0, max = 0;
            For(i, y.size()) {
                if(ini >= y[i].first /*y[i].second>=max*/) {
                    if(y[i].second >= max){
                        actual = y[i];
                        max = y[i].second;
                        pos=i;
                        D(y[i].first);
                        D(max);
                    }
                }
                else break;
                l;
            }
            cout<<"El max y es: "<<max<<endl;
            if(!max){
                fin=true;
                cout<<"SI"<<endl;
            } 
            else{
                //num++;
                cout<<"NO"<<endl;
            } 
            
            if(pos>=y.size()) {cout<<"Alerta en y:"<<endl;return 0;}
            
            y.erase(y.begin()+pos);
            For(i,y.size()) cout<<y[i].first<<","<<y[i].second<<" ";l;
            fila=false;
        }
        else {
            int pos2 = 0, max = 0;
            For(i, x.size()) {
                if(ini >= x[i].first /*and x[i].second>=max*/) {
                    if(x[i].second >= max) {
                        actual = x[i];
                        max = x[i].second;
                        pos2=i;
                        D(x[i].first);
                        D(max);
                    }
                }
                else break;
            }
            cout<<"El max x es: "<<max<<endl;
            if(!max){
            fin=true;
            cout<<"SI"<<endl;
            } 
            //else num++;
            if(pos2>=x.size()) {cout<<"Alerta en x:"<<endl;return 0;}
            x.erase(x.begin()+pos2);
            For(i,x.size()) cout<<x[i].first<<","<<x[i].second<<" ";l;
            fila=true;
        }
        
        if(ini < actual.first || fin) break;
        else num++;
        ini+=actual.second;
        
        D(actual.first);
        D(actual.second);l;
        D(ini);l;
        D(num);l;
        
       
    }
    return num;
}

int main() { IO;in;
    int n,x,t,h,m;
    
//    int numero = 0;
//    if(!numero) {
//        D("SI");
//    }
//    else D("NO");
    
    
//    vi a;
//    a.pb(12);
//    a.pb(18);
//    a.pb(26);
//    a.pb(25);
//    a.pb(32);
//    
//    For(i,a.size())cout<<a[i]<<" ";l;
//    D(a.size());l;
//    a.erase(a.begin()+2);
//    For(i,a.size())cout<<a[i]<<" ";l;
//    D(a.size());l;
//    a.erase(a.begin()+2);
//    For(i,a.size())cout<<a[i]<<" ";l;
//    D(a.size());l;
//    a.erase(a.begin()+2);
//    For(i,a.size())cout<<a[i]<<" ";l;
//    D(a.size());l;
//    
//    return 0;
    
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
    
    D(s1);l;l;l;
    
    int s2 = recorrido(fruit,caram,x);
    
    D(s2);l;l;l;
       
    //s1>s2 ? cout<<s1<<endl : cout<<s2<<endl;
    
    
//    cout<<"sol1: "<<s1<<endl;
//    cout<<"sol2: "<<s2<<endl;
    
    
    cout<<endl<<"Caram"<<endl;
    For(i,caram.size()) {
        cout<<caram[i].first<<","<<caram[i].second<<endl;
    }
    
    cout<<endl<<"fruit"<<endl;
    
    For(i,fruit.size()) {
        cout<<fruit[i].first<<","<<fruit[i].second<<endl;
    }
    
}
