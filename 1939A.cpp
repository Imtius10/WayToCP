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
      int n,k;
      cin>>n>>k;
      int eleminate[n];
      int player[k];
      for (int i = 0; i < n; ++i)
      {
      	cin>>eleminate[i];
      }
      for (int i = 0; i <k; ++i)
      {
      	cin>>player[i];

      }
      for (int i = 0; i < k; ++i)
      {
      	if (eleminate[0]> player[i])
      	{
      		cout<<player[i]<<" ";
      	}
      	else cout<<eleminate[0]-1<<" ";
      }
      cout<<endl;
     }
  return 0;
}