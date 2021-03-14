//optimisations
#pragma GCC optimise"O2"
#pragma GCC optimise"Os"
#pragma GCC optimise"unroll-loops"
#pragma GCC target"avx2"

//Libraries
#include<bits/stdc++.h>
#include<iostream>

//Definition
#define nl "\n"
#define loop(i,a,n) for(int i=a; i<n; i++)
#define rloop(i,a,n) for(int i=a;i>=n;i--)

//Namespaces
using namespace std;

void solve();
int tmz(int *T,int& N);

signed main(){
    solve();
    return 0;
    
return 0;
}

int tmz(int *T, int &N){
    int large=-1; int i;
    loop(i,0,N){
        if(T[i]>large)
        large=T[i];

    }
return large;
}
void solve(){
    int *T,x,H,N,i;
    cin>>N>>x>>H;
    T = new int[N];
    loop(i,0,N){
        cin>>*(T+i);
	}   
 int tz = tmz(T, N);
 if((tz+x)<=H){
    cout<<"YES";

}
else
cout<<"NO";
}


