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
      int n; cin>>n;
      int ar[n];
      int one=0;
      bool flag=false;
      for (int i = 0; i < n; ++i)
      {
      	cin>>ar[i];
        if (ar[i])
          {
            one++;
          }
        if (i)
        {
          if (ar[i]==0 and ar[i]==ar[i-1])
          {
           flag=true; 
          }
          
        }
      }
      if (flag or n==one or one==0)
      {
        cout<<"YES"<<nl;
      }      
      else cout<<"NO"<<nl;
     
     }
  return 0;
}