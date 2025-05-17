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
      int m,n,ans=0;
      cin>>m>>n;
      int ar[n]={};
      for (int i = 0; i < n; ++i)
      {
      	int x;
      	cin>>x;
      	ar[i]=x;
      	if (x>1)
      	{
      		ans+=(x*2)-1;
      	}
       else ans+=x;
      }
      sort(ar,ar+n);
      ans-=((ar[n-1]*2)-1);
      cout<<ans<<nl;
     }
  return 0;
}