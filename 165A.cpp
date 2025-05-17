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
       int n; cin>>n;
       int ar[n],x,loc;
       bool flag=false;
       for (int i = 0; i < n; ++i)
       {
       	 cin>>ar[i];
       }
        for (int i = 0; i < n; ++i)
        {
        	x=ar[i];
        	loc=i+1;
        	if (ar[x-1]==loc)
        	{
        		flag=true;
        		break;
        	}
        }
        if (flag) cout<<2<<nl;
        else cout<<3<<nl;
     }
  return 0;
}