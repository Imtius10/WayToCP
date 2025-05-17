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
       int n,k,p; cin>>n>>k>>p;
       if ((n*p)<(abs(k)))
       {
       	cout<<-1<<nl;
       }
       else if (k==0)
       {
       	cout<<0<<nl;
       }
       else{
       	if (abs(k)%p!=0)
       	{
       		cout<<(abs(k)/p)+1<<nl;
       	}
       	else cout<<abs(k)/p<<nl;
       }
       //cout<<nl;
     }
  return 0;
}