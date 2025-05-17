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
       int a,b,c,d,e;
       cin>>a>>b>>c>>d>>e;
       int temp=a^b^c^d;
       cout<<(temp);
       //int temp2=temp^(a^b^c);
       
     }
  return 0;
}