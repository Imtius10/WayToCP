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
  string M="codeforces";
  string S;
     while(t--){
     	int ans=0;
      cin>>S;
      for (int i = 0; i < 10; ++i)
      {
      	if (S[i]!=M[i])
      	{
      		ans++;
      	}
      }
      cout<<ans<<nl;
     }
  return 0;
}