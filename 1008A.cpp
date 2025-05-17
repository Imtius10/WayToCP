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
      int n,m,sum=0;
      cin>>n>>m;
      int ar[n];
      for (int i = 0; i < n; ++i)
      {
      	cin>>ar[i];
      	sum+=ar[i];
      }
      if (n*m==sum)
       {
       	cout<<"YES"<<nl;
       } 
      else cout<<"NO"<<nl;
     }
  return 0;
}