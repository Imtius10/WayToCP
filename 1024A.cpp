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
  int x=0;
     while(t--){
       int n,m,p,q; cin>>n>>m>>p>>q;
       
       int temp=n/p;
       int chk=(temp*q);
      // cout<<chk<<nl;
       
       if (n%p)
       {
       	cout<<"YES"<<nl;
       }
      else if (n%p==0 and chk==m)
       {
       	cout<<"YES"<<nl;
       }
       else cout<<"NO"<<nl;
     }
  return 0;
}