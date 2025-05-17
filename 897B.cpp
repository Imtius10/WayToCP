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
       int n,need=0;
       cin>>n;
       string str;
       cin>>str;
       for (int i = 0; i <n/2; ++i)
       {
       	if (str[i]!=str[n-i-1])
        {
          need++;
        }
       }
       if (n%2==0)
       {
         for (int i = 0; i < n; ++i)
         {
           if (i and i%need==0)
           {
             cout<<"1";
           }
           else cout<<"0";
         }
       }
      cout<<endl;
     }
  return 0;
}