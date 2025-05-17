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
       int a,b;
       cin>>a>>b;
       //cout<<b;
      // int x=97;
      for (int i = 0; i < a; ++i)
      {
      	for (char j = 'a'; j < 'a'+b; ++j)
      	{
      		cout<<j;
      	}
      }
       cout<<endl;
     }
  return 0;
}