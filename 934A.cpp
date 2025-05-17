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
     if (n-1>k)
     {
     	cout<<n<<endl;
     }
     else cout<<1<<endl;
     }
  return 0;
}