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
       string str,a,b;
       cin>>str;
       int n=str.size();
       for (int i = 0; i < 2*n; ++i)
       {
         a += "()"[i & 1];
         b += ")("[i < n];
         
       }
       if (a.find(str)==string::npos)
       {
         cout<<"YES\n"<<a<<"\n";
       }
       else if (b.find(str)==string::npos)
       {
         cout<<"YES\n"<<b<<"\n";
       }
       else cout<<"NO\n";
       
     }

  return 0;
}