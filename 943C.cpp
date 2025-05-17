#include<iostream>
#include<algorithm>
#include<limits.h>
#include <cmath>
#include <map>
#define int long long
#define nl "\n"
#define pb push_back
using namespace std;
int32_t main()
{
  #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
  #endif
  int t;
  cin>>t;
     while(t--){
      int a,b;
      cin>>a>>b;
      if (a==b) cout<<"YES"<<endl;
      else if((a-b)%2==0 and a>b) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
        
     }
  return 0;
}