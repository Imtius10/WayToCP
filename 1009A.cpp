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
      int a,b,c,d; cin>>a>>b>>c>>d;
      if (a==c and c==b and b==d)
      {
      	cout<<"YES"<<nl;
      }
      else cout<<"NO"<<nl;
     }
  return 0;
}