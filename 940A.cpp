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
       int n,cnt=0;
       cin>>n;
       int ar[101]={0};
       for (int i = 0; i < n; ++i)
       {
       	int x;
       	cin>>x;
       	ar[x]++;
       }
     for (int i = 0; i <=100; ++i)
     {
      if (ar[i]>=3)
     {
       cnt+=ar[i]/3;
     }
      
     }
    cout<<cnt<<endl;
   }
  return 0;
}