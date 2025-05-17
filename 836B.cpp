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
       int n;
       cin>>n;
       if (n&1)
       {
       	for (int i = 0; i < n; ++i)
       	{
       		cout<<1<<" ";
       	}
       	cout<<nl;
       }
       else {
           for (int i = 0; i < n-2; ++i)
           {
           	cout<<2<<" ";
           }
           cout<<"1 3"<<nl;
       }


     }
  return 0;
}