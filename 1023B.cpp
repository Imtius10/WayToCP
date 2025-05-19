#include<bits/stdc++.h>
#define nl "\n"
#define pb push_back
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
     while(t--){
      int n,sum=0,mn=INT_MAX,mx=INT_MIN,k; cin>>n>>k;
      int ar[n];
      for (int i = 0; i < n; ++i)
      {
      	cin>>ar[i];
        sum+=ar[i];
      }
       sort(ar,ar+n);
       ar[n-1]--;
       cout<<ar[n-1];
      if (ar[n-1]-ar[0]>k or sum%2==0)
      {
        cout<<"Jerry"<<nl;
      }
       else cout<<"Tom"<<nl;
      
     }
  return 0;
}