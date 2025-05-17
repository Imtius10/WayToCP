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
      int a,b; cin>>a>>b;
      for (int i = 0; i < min(a,b); ++i)
      {
      	cout<<"01";
      }
      for (int i = 0; i < abs(a-b); ++i)
      {
      	cout<<(a<b? 1:0);
      }
      cout<<nl;
     }
  return 0;
}