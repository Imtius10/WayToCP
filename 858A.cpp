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
      int a,b,c,d; 
      cin>>a>>b>>c>>d;
      int ans1=abs(d-b);
      a=a+ans1;
     
      int ans2=a-c;
      //cout<<ans1<<" "<<ans2<<nl;
      if (c>a or b>d)
      {
      	cout<<"-1"<<nl;
      }
      else cout<<ans2+ans1<<nl;
     }
  return 0;
}