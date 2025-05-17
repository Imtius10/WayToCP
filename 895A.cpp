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
       double a,b,c;
       cin>>a>>b>>c;
       double temp=(a+b)/2;
       double temp1=temp-min(b,a);
       double ans=ceil(temp1/c);
       cout<<ans<<endl;
     }
  return 0;
}