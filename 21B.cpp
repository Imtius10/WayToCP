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
     int ans=0,r=1;
     for (int i = 0; i < n; ++i)
     {
     	int x;
     	cin>>x;
     	if (x>0 and r==1)
     	{
     		ans++;
     		r=0;
     	}
     	else if (x==0)
     	{
     		r=1;
     	}
     }
     cout<<ans<<endl;
     }
  return 0;
}