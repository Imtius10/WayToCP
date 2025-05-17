#include<iostream>
#include<algorithm>
#include<limits.h>
#include <cmath>
#include <map>
#define int long long
#define nl "\n"
#define pb push_back
using namespace std;
int32_t main()
{
  #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
  #endif
  int t;
  cin>>t;
     while(t--){
     	int n,f=0,l=-1,zero=-1;
     	cin>>n;
     	int ar[n+1];
     	for (int i = 1; i <=n; ++i)
     	{
     		cin>>ar[i];
     		if (ar[i]==1 and f==0)
     		{
     			f=i;
     		}
     		else if (ar[i]==1)
     		{
     			l=i;
     		}

     	}
     	for (int i = f; i <= l; ++i)
     	{
     		if (ar[i]==0)
     		{
     			zero++;
     		}
     	}
       cout<<zero+1<<endl;
     }
  return 0;
}