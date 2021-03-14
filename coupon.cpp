#include <bits/stdc++.h>
#include<iostream>
using namespace std;
void solve()
{ int a1,a2,a3,b1,b2,b3,c,d;
  cin>>d>>c>>a1>>a2>>a3>>b1>>b2>>b3;
  if(a1+a2+a3+b1+b2+b3 + 2*d > (a1+a2+a3+b1+b2+b3+c+(a1+a2+a3<150)?d:0+(b1+b2+b3<150)?d:0))
  cout<<"YES";
  
  else
  cout<<"NO";
}  

int main() {
 //   #ifndef ONLINE_JUDGE
 //   freopen("C:\\input","r",stdin);
 //   freopen("C:\\output","w",stdout);
 //   #endif
 //  ios_base::sync_with_stdio(false);
   int t;
 //  cin.tie(NULL);
 //  cout.tie(NULL);
    while(t--)
    solve();	
	return 0;
}

