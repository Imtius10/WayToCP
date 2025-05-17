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


      if (n%2==0)
      {
      	cout<<"YES"<<endl;
      	for (int i = 0; i < n/2; ++i)
      	{
      		for (int j = 0; j < 2; ++j)
      		 {
      		 	cout<<"AB"[i&1];
      		 } 
      	}
      	cout<<endl;
      	
      }
      
      	else cout<<"NO"<<endl;
      
     }
  return 0;
}