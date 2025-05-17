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
     long long n,m,p,ans=0,temp1=0,temp2=-1,i=0; cin>>n>>m>>p;
     string str; cin>>str;
     long long br=0;
     for (int i = 0; i < n; ++i)
     {
     	if (str[i]=='L')
     	{
     		m--;
     		if (m==0)
     		{
     			ans++;
     			m=0;
     			temp1=i+1;
     			break;
     		}
     	}
     	if (str[i]=='R')
     	{
     		m++;
     		if (m==0)
     		{
     			ans++;
     			m=0;
     			temp1=i+1;

     			break;
     		}
     	}
     }
     if (temp1==p)
     {
        cout<<ans<<nl;
     }
     else if (temp1>p)
     {
     	cout<<0<<nl;
     }
     else if (ans)
     {
     	for (int i = 0; i < n; ++i)
     	{
     		if (str[i]=='L')
     	{
     		m--;
     		if (m==0)
     		{
     			ans++;
     			m=0;
     			temp2=i+1;

     			break;
     		}
     	}
     	if (str[i]=='R')
     	{
     		m++;
     		if (m==0)
     		{
     			ans++;
     			m=0;
     			temp2=i+1;
     			break;
     		}
     	}
     	}
     	if (temp2==-1)
     	{
     		cout<<ans<<nl;
     		continue;
     	}
     	cout<<((p-temp1)/temp2)+1<<nl;
     }
    else cout<<0<<nl;
      
     }
  return 0;
}