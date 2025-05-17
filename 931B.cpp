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
      int ar[]={0,1,2,1,2,3,1,2,3,2,1,2,2,2,3};
      if (n<15) cout<<ar[n%15]<<endl;
      else if (n%15==5) cout<<(n/15)+1<<endl;
      else if (n%15==8) cout<<(n/15)+2<<endl;
      else cout<<(n/15)+ar[n%15]<<endl;
     
     }
  return 0;
}
// 1
// 2
// 1
// 3
// 2
// 2
// 2
// 3
// 2
// 3
// 2
// 2
// 8
// 26862090