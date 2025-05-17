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
      string str; cin>>str;
      int temp=0,ans=0;
      char A,B,C;
      for (int i = 0; i < str.size(); ++i)
      {
      	if (temp==0)
      	{
      		A=str[i];
      		//cout<<str[i]<<" ";
      		temp++;
      	}
      	else if (temp==1 and str[i]!=A)
      	{
          B=str[i];
          //cout<<str[i]<<" ";
          temp++;
      	}
      	else if (temp==2 and (str[i]!=A and str[i]!=B))
      	{
      		C=str[i];
      		//cout<<str[i]<<" ";
      	}
      }
     // cout<<nl;
      temp=0;
      for (int i = 0; i < str.size(); ++i)
      {
      	if (str[i]==A)
      	{
      		ans++;
      		temp++;
      		
      	}
      	else if (str[i]==B)
      	{
      		ans--;
      		temp--;
      		

      	}
      	else if (str[i]==C and ans>0) {
      		ans--;
      		
      	}
      	else if (str[i]==C and ans<=0)
      	{
      		ans++;
      		
      	}
      }
      if (ans==0)
      {
      	cout<<"YES"<<nl;
      }
      else cout<<"NO"<<nl;
  
     }
  return 0;
}