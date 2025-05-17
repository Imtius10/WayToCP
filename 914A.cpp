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
      int a,b,Kx,Ky,Qx,Qy;
      cin>>a>>b>>Kx>>Ky>>Qx>>Qy;
      vector<long> dx={-a,-a,a,a,b,b,-b,-b};
      vector<long> dy={-b,b,b,-b,a,-a,a,-a};
      set<pair<int,int>>indxK;
      set<pair<int,int>>indxQ;
      for (int i = 0; i < 8; ++i)
      {
      	indxK.insert({Kx+dx[i],Ky+dy[i]});
      }
       for (int i = 0; i < 8; ++i)
      {
      	indxQ.insert({Qx+dx[i],Qy+dy[i]});
      }
      int ans=0;
      for (auto i:indxK){
      	if (indxQ.find(i)!=indxQ.end())
      	{
      		ans++;
      	}
      	//cout<<i.first<<" "<<i.second<<endl;
      }
     cout<<ans<<endl;
     }
  return 0;
}