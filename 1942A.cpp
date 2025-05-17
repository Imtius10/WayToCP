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
      int n,ans=0,dif=0;
      cin>>n;
      vector<int> a;
      vector<int> b;

      for (int i = 0; i < n; ++i)
      {
      	int x;
      	cin>>x;
      	a.push_back(x);
      }
      for (int i = 0; i < n; ++i)
      {
        int x;
      	cin>>x;
      	b.push_back(x); 
      }
      for (int i = 0; i < n; ++i)
      {
      	if (a[i-dif]>b[i])
      	{
      		//cout<<a[i]<<" "<<b[i]<<endl;
      		ans++;
      		dif++;
      	}
      }
      cout<<ans<<endl;
     }
  return 0;
}