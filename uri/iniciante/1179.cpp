//TEMPLATE COM MACROS PARA OS CONTESTS
//compile usando: g++ -std=c++11 -lm -O3 arquivo.cpp
#include <bits/stdc++.h>
#define FOR(x) for(int i=0;i<x;i++)
#define ROF(x) for(int i=x-1;i>=0;i--)
#define FORJ(x) for(int j=0;j<x;j++)
#define FORQ(Q) for(int i=0;Q;i++)
#define FORM(x,y) for(int i=0;i<x;i++) for(int j=0;j<y;j++)
#define FORT(x,y) for(int i=x;i<y;i++)
#define ROFT(x,y) for(int i=x-1;i>=y;i--)
#define WHILE(n,x) while((n--)&&cin>>x)
#define M(x,y) max(x, y)
#define m(x,y) min(x, y)
#define c(x) cout<<x<<endl
#define C(x) cin>>x
#define set(a,b) cout.precision(a); cout<<fixed<<b<<endl
#define pcs(a) cout.precision(a)
#define fx(a) fixed<<a
#define gl(s) getline(cin,s)
#define pb(a) push_back(a)

using namespace std;
typedef long long ll;
typedef unsigned long long ull;

void print (vector<int> a, size_t b, bool par){
    FOR(b){
        if(par) printf("par[%d] = %d\n",i,a[i]);
        else printf("impar[%d] = %d\n",i,a[i]);
    }
}

int main(){
int j,k;
vector <int> impar, par;
impar.resize(5);
par.resize(5);
k=j=0;
for(int i=0,n; i<15; i++){
    cin>>n;
    if(n&1){
        impar[k%5] = n;
        k++;
    }
    else{
        par[j%5] = n;
        j++;
    }
    if (k && !(k%5)){
        FOR(5){
            printf("impar[%d] = %d\n",i,impar[i]);
        }
        k=0;
    }
    if(j && !(j%5)){
        FOR(5){
            printf("par[%d] = %d\n",i,par[i]);
        }
        j=0;    
    }
}
FOR(k){
    printf("impar[%d] = %d\n",i,impar[i]);
}
FOR(j){
    printf("par[%d] = %d\n",i,par[i]);
}
return 0;
}
