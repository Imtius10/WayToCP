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
       int a,b,ans1=-1,ans2=-1;
       cin>>a>>b;
       int temp=b/2;
       for (int i = 2; i < temp; ++i)
       {
       	for (int j = temp; j <= b; ++j)
       	{
       		if (i+j<=b and i+j>=a)
       		{
       			if (__gcd(i,j))
       			{
       				cout<<j<<endl;
       				ans1=i;
       				ans2=j;
       				break;
       				
       			}
       		}
       	}
       	break;
       }
       
       	//cout<<ans1<<" "<<ans2<<endl;
       
      
     // cout<<t<<endl;
     }
  return 0;
}