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
      int n; cin>>n;
      int ar[n],br[n];
      for (int i = 0; i < n; ++i)
      {
      	cin>>ar[i];
      }
      for (int i = 0; i < n; ++i)
      {
      	cin>>br[i];
      	if (ar[i]>br[i])
      	{
      		swap(ar[i],br[i]);
      	}
      }
      int a=ar[n-1];
      int b=br[n-1];
      sort(ar,ar+n);
      sort(br,br+n);
      if (ar[n-1]==a and br[n-1]==b)
      {
      	cout<<"YES"<<nl;
      }
      else cout<<"NO"<<nl;


     }
  return 0;
}