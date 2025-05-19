#include<bits/stdc++.h>
#define nl "\n"
#define pb push_back
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
     while(t--){
      int r,c,n,m;
      cin>>r>>c>>n>>m;
      int a1,a2,a3,a4;
      a1=ceil(log2(r));
      a2=ceil(log2(c));
      a3=ceil(log2(min(n,r-n+1)));
      a4=ceil(log2(min(m,c-m+1)));
      cout<<min(a1+a4,a2+a3)+1<<nl;


     }
  return 0;
}