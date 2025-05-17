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
  long long t;
  cin>>t;
     while(t--){
     	int n;
     	cin>>n;
     	long long ans=0;
     	long long ar[n];
     	for (long long i = 0; i < n; ++i)
     	{
     		cin>>ar[i];
     		ans+=ar[i];
     	}
     	cout<<ans-2*ar[n-2]<<endl;
     	
     	
     	
     	
     
     }
  return 0;
}