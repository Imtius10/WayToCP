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
     int n; cin>>n;
     cout<<1<<" ";
     for (int i = 1; i < n; ++i)
     {
     	cout<<0<<" ";
     }
     cout<<endl;
     }
  return 0;
}