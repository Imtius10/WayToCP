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
       int n,odd=0;
       cin>>n;
       for (int i = 0; i < n; ++i)
       {
       	int x;
       	cin>>x;
       	if (x%2!=0)
       	{
       		odd++;
       	}
       }
       if (odd==0 or odd%2==0)
       {
         cout<<"YES"<<endl;
       }
       else cout<<"NO"<<endl;
     }
  return 0;
}