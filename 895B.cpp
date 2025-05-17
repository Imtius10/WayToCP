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
       int n,ans=INT_MAX;
       cin>>n;
     while(n--){
       int a,b,temp;
       cin>>a>>b;
      if (b%2==0)
      {
      	temp=((b/2)+a)-1;
       ans=min(temp,ans);
      }
       else {
       	temp=((b/2)+a);
       ans=min(temp,ans);
       }
     }
     cout<<ans<<endl;
     }
  return 0;
}