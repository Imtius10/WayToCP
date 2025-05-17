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
       int n,Q=0,A=0;
       cin>>n;
        string str;
        cin>>str;
        for (int i = 0; i < n; ++i)
        {
          if (str[i]=='Q')
          {
            Q++;
          }
          else if(str[i]=='A' and Q)
          {
            Q--;
          }
          
        }
        if (str[n-1]=='Q')
        {
          cout<<"NO"<<endl;
        }
        else if (A<Q)
        {
          cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
       
     }
  return 0;
}