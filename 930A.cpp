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
       int n;
       cin>>n;
       long temp=log2(n);
       long ans=pow(2,temp);
       cout<<ans<<endl;
     }
  return 0;
}