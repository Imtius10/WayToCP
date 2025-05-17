#include<bits/stdc++.h>
#include<limits.h>
#define nl "\n"
#define pb push_back
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
  #endif
  int t;
  cin>>t;
     while(t--){
      int n,temp=1; cin>>n;
      bool flag=false;
      string str; cin>>str;
      if (str[0]-48<=57)
      	{
      		for (int i = 1; i < str.size(); ++i){
      			if (str[i]>=str[i-1])
      			{
      				temp++;
      			}
      		}
      		if (temp==str.size())
      		{
      			flag=true;
      		}
      	}
      	else 
      	{
      		for (int i = 1; i < str.size(); ++i){
      			if (str[i]>=str[i-1])
      			{
      				temp++;
      			}
      		}
      		if (temp==str.size())
      		{
      			flag=true;
      		}
      	}
      	if (flag)
      	{
      		cout<<"YES"<<nl;
      	}
      	else cout<<"NO"<<nl;
      
     }
  return 0;
}