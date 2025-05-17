#include<bits/stdc++.h>
#include<limits.h>
#define nl "\n"
#define pb push_back
using namespace std;
int main()
{
  #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
  #endif
  int t;
  cin>>t;
     while(t--){
      int ar[3]={};
      int ans=1;
      for (int i = 0; i < 3; ++i)
      {
      	cin>>ar[i];
      }
      
      for (int i = 0; i < 5; ++i)
      {
        sort(ar,ar+3);
        ar[0]+=1;
      }
      cout<<(ar[0]*ar[1]*ar[2]);
      cout<<endl;
     }
  return 0;
}