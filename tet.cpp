#include<bits/stdc++.h>
#define nl "\n"
#define pb push_back
#define all(a) a.begin(),a.end()
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
     while(t--){
       int n,m; cin>>n>>m;
       long long ans=0;
       vector<vector<int>>ar(n,vector<int>(m));
       for (int i = 0; i < n; ++i)
       {
       	for (int j = 0; j < m; ++j)
       	{
       		cin>>ar[i][j];
       	}
       }
       for (int i = 0; i < m; ++i)
       {
       	vector<int>temp(n);
       	for (int j = 0; j < n; ++j)
       	{
       		temp[j]=ar[j][i];
       	}
       	sort(all(temp));
       	for (int j = 0; j <n; ++j)
       	{
       		ans+=1ll*(j+j-(n-1))*temp[j];
       	}
       }
       cout<<ans<<nl;
     }
  return 0;
}