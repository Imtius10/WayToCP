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
      int n; cin>>n;
      int x=n*3;
      if (n==1)
      {
        cout<<1<<nl;

          cout<<1<<" "<<3<<nl;
      }
      else if (n==2)
      {
        cout<<n/2<<nl;
          cout<<2<<" "<<6<<nl;
          
      }
      else {
        int ans=1;
        int temp=(n+1)/2;
        cout<<temp<<nl;
        cout<<ans<<" "<<x<<nl;
        temp=temp-1;
        ans+=3;
        while(temp--){
            cout<<ans<<" "<<x-(ans-1)<<nl;
            ans+=3;
        }
      }
     }
  return 0;
}