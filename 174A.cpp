#include<bits/stdc++.h>
#include<limits.h>
#define nl "\n"
#define pb push_back
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
  #endif
  int t;
  cin>>t;
     while(t--){
      int n; cin>>n;
      int ar[n];
      bool flag=false;
      for (int i = 0; i < n-2; ++i)
      {
      	cin>>ar[i];
      }
      if (n>3)
      {
      	for (int i = 0; i < n-4; ++i)
      {
      	if (ar[i]==1 and ar[i+1]==0 and ar[i+2]==1)
      	{
      		flag=true;
      		break;
      	}
      }
      }
      else {
      	if (ar[1]==1)
      	{
      		flag=true;
      	}
      }
      if (flag)
      {
      	cout<<"NO";
      }
      else cout<<"YES";
      cout<<nl;
     }
  return 0;
}