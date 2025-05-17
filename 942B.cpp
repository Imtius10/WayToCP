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
      int n;
      cin>>n;
      string str;
      cin>>str;
      int ans=0;
      for (int i = 0; i < n; ++i)
      {
      	if (str[i]=='U')
      	{
      		ans++;
      	}
      }
      if (ans&1)
      {
      	cout<<"YES"<<endl;
      }
      else cout<<"NO"<<endl;
     }
  return 0;
}