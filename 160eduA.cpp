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
      string str;
      int res=1,mul=10;
      cin>>str;
      int a=str[0]-48;
      a*=mul;
      int b=0;
      for (int i = 1; i < str.length(); ++i)
      {
      	
      	if ( str[i]=='0')
      	{	
      		a+=(str[i]-48);
  		    a*=mul;
  		    res++;
      	}
      	else {

      		a=a/10;
      		break;
      	}

      }
     
      for (int i = res; i < str.length(); ++i)
      {
      	b+=(str[i]-48);
      	b*=mul;
      	
      }
      b/=10;
      if (a==b)
      {
      	cout<<"-1"<<endl;
      }
      else if (b==0 or a==0)
      {
      	cout<<"-1"<<endl;
      }
      else if (a>b)
      {
      	cout<<"-1"<<endl;
      }
      else  cout<<a<<" "<<b<<endl;
     }
  return 0;
}