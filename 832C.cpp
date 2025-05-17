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
      long long n; cin>>n;
      long long sum=0;
      for (int i = 0; i < n; ++i)
      {
      	long long x; cin>>x;
      	sum+=x;
      }
      if (sum&1)
      {
      	cout<<"Alice"<<nl;
      }
      else cout<<"Bob"<<nl;
     }
  return 0;
}