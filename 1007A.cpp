#include<bits/stdc++.h>
#include<limits.h>
#define nl "\n"
#define pb push_back
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
  #endif
  int t;
  cin>>t;
     while(t--){
     int n; cin>>n;
     if ((n%3)==1)
     {
     	cout<<"YES"<<nl;
     }
     else cout<<"NO"<<nl;
     }
  return 0;
}