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
      ll n,ans1=0,ans2=0,pos=0,temp=0; cin>>n;
      vector<ll> v;
      for (ll i = 0; i < n; ++i)
      {
      	ll x; cin>>x;
      	v.push_back(x);
      	ans1|=x;
      }
      for (int i = 0; i < n; ++i)
      {
      	ans2|=v[i];
      	if (ans2==ans1)
      	{
      	
      			pos=i+1;
      			break;
      		
      		
      	}
      }
      for (int i = 1; i < n; ++i)
      {
      	if (i+pos<=n)
      	{
      	for (int j = n; j > n-(i+pos); --j)
      	{
      	 temp|=v[j];
      	}
      	if (temp==ans1)
      	{
      	continue;
      	}
      	else pos+=1;
      	}
      
      		
      }
      cout<<pos<<nl;
     }
  return 0;
}