#include<bits/stdc++.h>
#include<algorithm>
#include<limits.h>
#include <cmath>
#include <map>
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
       int n;
       cin>>n;
       int ar[n];
       vector<int>newar;
       for (int i = 0; i < n; ++i)
       {
       	cin>>ar[i];
       }
       
       for (int i = 1; i < n; ++i)
       {
       
        if (ar[i-1]<=ar[i])
        {
          newar.pb(ar[i]);
        }
        else 
        {
          newar.pb(ar[i]);
          newar.pb(ar[i]);
        }

       }
       int x=newar.size();
       cout<<x+1<<endl;
       cout<<ar[0]<<" ";
       for (int i = 0; i < x; ++i)
       {
         cout<<newar[i]<<" ";
       }
       cout<<endl;
     }
  return 0;
}