#include<bits/stdc++.h>
#include<algorithm>
#include<limits.h>
#include <cmath>
#include <map>
#define int long long
#define nl "\n"
#define pb push_back
using namespace std;
void V(){
  int n;
  cin>>n;
  cout<<n;
  vector<int>vr(n);
  for (int i = 0; i < n; ++i)
  {

    cin>>vr[i];
    
  }
  cout<<nl;
    for (int i = 0; i < n; ++i)
  {
    cout<<vr[i]<<" ";
  }
}
int32_t main()
{
  #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
  #endif
  V();

  return 0;
}