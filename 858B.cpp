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
        int n,zero=0,temp=0; cin>>n;
        int ar[n];
        for (int i = 0; i < n; ++i)
        {
        	cin>>ar[i];
        	if (ar[i]==0)
        	{
        		zero++;
        	}
        	else if (ar[i]>=2)
        	{
        		temp=1;
        	}
        }
       if ((zero)<=((n+1)/2))
       {
       	cout<<0<<nl;
       }
       else if (temp or zero==n)
       {
       cout<<1<<nl;
       }
       else cout<<2<<nl;
     }
  return 0;
}