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
      int n;
      cin>>n;
      int ar[n];
      for (int i = 0; i < n; ++i) cin>>ar[i];
      	sort(ar,ar+n);
      int i,j,k,l,ans;
      i=ar[0];
      j=ar[n-1];
      k=ar[1];
      l=ar[n-2];
      ans=abs(i-j)+abs(j-k)+abs(k-l)+abs(l-i);
      cout<<ans<<endl;
      
     }
  return 0;
}