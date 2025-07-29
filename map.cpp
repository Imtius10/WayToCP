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
      map<int,int>mp;
      for (int i = 1; i <= 6; ++i)
      {
      	int x; cin>>x;
      	// mp.insert({i,x});
      	mp[x]=i;
      }
      for(auto m:mp){
      	cout<<m.first<<" "<<m.second<<nl;
      }
     }
  return 0;
}