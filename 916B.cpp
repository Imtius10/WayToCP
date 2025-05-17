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
      if (b==0)
      {
      	for (int i = a; i > 0; i--)
      {
      	cout<<i<<" ";
      }
      }
      else{
      	for (int i = 1; i <= b; ++i)
      {
       cout<<i<<" ";
      }
      	for (int i = a; i > b; i--)
      {
      	cout<<i<<" ";
      }
      }
      
      
      cout<<endl;
     }
  return 0;
}