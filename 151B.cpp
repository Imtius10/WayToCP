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
  int x=0;
     while(t--){
      long long a,b,c,d,e,f;
      cin>>a>>b;
      cin>>c>>d;
      cin>>e>>f;
      int ans=1;
       if (a<c and a<e)
       {
         ans+=min(c,e)-a;
       }
       if (a>c and a>e)
       {
         ans+=a-max(c,e);
       }
       if (b<d and b<f)
       {
         ans+=min(d,f)-b;
       }
        if (b>d and b>f)
       {
         ans+=b-max(d,f);
       }
       cout<<ans<<endl;
     }
  return 0;
}