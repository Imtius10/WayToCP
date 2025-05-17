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
       int n,color;
       cin>>n>>color;
       if (color==(4*n)-2)
       {
       	cout<<(color+2)/2<<endl;
       }
      else if (color&1)
       {
       	cout<<(color+1)/2<<endl;
       }
       else cout<<color/2<<endl;

     }
  return 0;
}