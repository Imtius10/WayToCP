#include<bits/stdc++.h>
#define nl "\n"
#define pb push_back
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
     while(t--){
      int n,j,k,check=0,temp=0; cin>>n>>j>>k;
      int ar[n];
      for (int i = 0; i < n; ++i)
      {
          cin>>ar[i];
          if (check==0 and i==j-1)
          {
          	check=ar[i];
          }
          
      }
      sort(ar,ar+n);
      if (k==1)
      {
      	if (ar[n-1]==check )
      	{
      			cout<<"YES"<<nl;
      	}
      	else cout<<"NO"<<nl;
      
      }
      else cout<<"YES"<<nl;
      
      
     }
  return 0;
}