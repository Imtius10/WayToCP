#include<bits/stdc++.h>
#define nl "\n"
#define pb push_back
#define all(a) a.begin(),a.end()
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
     while(t--){
      int a,b; cin>>a>>b;
      int max=-1,ans=0;
     for (int i = a; i <= b; ++i)
     {
       string str=to_string(i);
       int val=(*max_element(str.begin(),str.end()))-(*min_element(all(str)));
       if (val>max)
       {
         max=val;
         ans=i;
       }
       if (max==9)
       {
         break;
       }
     }
     cout<<ans<<nl;
     
      
      
     }
  return 0;
}