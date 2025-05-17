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
     int n,m,k,x=1,temp=1;
     cin>>n>>m>>k;
     cout<<n<<" ";
     for (int i = n-1; i >=0; i--)
     {
     	if (i>m)
     	{
     		cout<<n-x<<" ";
     		x++;
     	}
     	else if (i<m)
     	{
     	cout<<temp<<" ";
     	temp++;
     	} 
     }
     cout<<nl;
     }
  return 0;
}