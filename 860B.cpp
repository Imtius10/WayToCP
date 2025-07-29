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
       map<int,int>mp;
       for (int i = 1; i <= n; ++i)
       {
       	 int m; cin>>m;
       	 for (int j = 1; j <= m; ++j)
       	 {
       	 	int x; cin>>x;
       	 	mp[x]=i;
       	 }
       }
       vector<int>ans(n+1,-1);
       for(auto [v,last]:mp){
       	if (ans[last]==-1)
       	{
       		ans[last]=v;
       	}
       }
       bool chk=true;
       for (int i = 1; i <=n ; ++i)
       {
       	if (ans[i]==-1)
       	{
       		chk=false;
       		break;
       	}
       }
       if (chk)
       {
       	for (int i = 1; i <= n; ++i)
       	{
       		cout<<ans[i]<<" ";
       	}
       }
       else cout<<-1;
       cout<<nl;
     }
  return 0;
}