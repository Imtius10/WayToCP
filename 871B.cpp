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
      int n,max=-1,temp=0;
      cin>>n;
      for (int i = 0; i < n; ++i)
      {
      	int x;
      	cin>>x;
      	if (x==0)
      	{
      		temp++;
      	} if (x==1)
      	{
      		temp=0;
      	}
      	 if (temp>max)
      	{
      		max=temp;
      	}
      }
      cout<<max<<nl;
     }
  return 0;
}