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
     	int ans=a-(a%b);
     	ans+=min(a%b,b/2);
     	cout<<ans<<endl;

   
     }
  return 0;
}