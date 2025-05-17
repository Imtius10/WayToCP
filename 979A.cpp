#include<bits/stdc++.h>
#include<limits.h>
#define nl "\n"
#define pb push_back
using namespace std;
int main()
{
  #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
  #endif
  int t;
  cin>>t;
     while(t--){
    int n,sum=0;
    cin>>n;
    int ar[n];
    int br[n];
    int cr[n];
    for (int i = 0; i < n; ++i)
    {
    	cin>>ar[i];
    }
    if (n==1)
    {
    	cout<<0<<endl;
    }
    else {
    	sort(ar,ar+n);
    	for (int i = 1; i < n; ++i)
    	{
    		br[i]=ar[0];
    	}
    	for (int i = 1; i < n; ++i)
    	{
    		cr[i]=ar[n-1];
    	}
    	br[0]=ar[n-1];
    	cr[0]=ar[n-1];
    	for (int i = 0; i < n; ++i)
    	{
    		sum+=cr[i]-br[i];
    	}
    	//cout<<ar[0]<<endl;
    	cout<<sum<<endl;
     }
    }
  return 0;
}