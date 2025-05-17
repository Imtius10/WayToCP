#include<bits/stdc++.h>
#define nl "\n"
#define pb push_back
#define ll long long
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
     while(t--){
      ll n; cin>>n;
      ll chk=(n*(n+1))/2;
      //cout<<chk<<nl;
      ll temp=sqrt(chk);
      vector<ll>v;
      if (temp*temp==chk)
      {
         cout<<"-1";
      }
      else {
         for (ll i = 1; i <=n ; ++i)
         {
            chk=(i*(i+1))/2;
            temp=sqrt(chk);
            if (temp*temp==chk)
            {
               v.push_back(i+1);
               v.push_back(i);
               i++;
            }
            else v.push_back(i);
         }
         for(auto i:v) cout<<i<<" ";
      }
   cout<<nl;
     }
  return 0;
}