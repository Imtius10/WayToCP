#include<bits/stdc++.h>
#define nl "\n"
#define pb push_back
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
       int n; cin>>n;
      for (int i = 0; i < n; ++i)
      {
      	int x; cin>>x;
      	if ((x-1)%4==3)
      	{
      		cout<<"Bob"<<nl;
      	}
      	else cout<<"Alice"<<nl;
      }
     
  return 0;
}