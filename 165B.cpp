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
       string str; cin>>str;
       long long x=0,y=0,ans=0;
       for (int i = 0; i < str.size(); ++i)
       {
       	   if (str[i]=='1')
       	   {
       	   	 x=i+1;

       	   	for (int j = i; j <str.size() ; ++j)
       	   	{
       	   		if (str[j]=='0')
       	   		{
       	   			y=j+1;
       	   			char temp=str[x];
       	   			str[x]=str[j];
       	   			str[j]=temp;

       	   			ans+=(y-x)+1;
       	   			x++;
       	   			
       	   		}
       	   	}
       	   	break;
       	   }
       }
       cout<<ans<<nl;
     }
  return 0;
}