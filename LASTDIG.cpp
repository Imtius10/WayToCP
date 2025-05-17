#include<bits/stdc++.h>
#define nl "\n"
#define pb push_back
const int M=1e9+7;
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
     while(t--){
       int a,b; cin>>a>>b;
       int ans=1;
       while(b){
         if (b&1)
         {
         	ans=(ans*1ll*a)%10;
         }
         else a=(a*a)%10;
         b>>=1;
       }
       cout<<ans<<nl;
     }
  return 0;
}