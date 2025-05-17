#include<bits/stdc++.h>
#include<limits.h>
#define nl "\n"
#define pb push_back
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
  #endif
  int t;
  cin>>t;
     while(t--){
      int b,c,h,ans=1;
      cin>>b>>c>>h;
      int mid=c+h;
     if (b>mid)
     {
     	cout<<((2*mid))+1<<nl;
     }
     // else if(b==2) cout<<3<<nl;
     else cout<<((b*2)-1)<<nl;
     }
  return 0;
}