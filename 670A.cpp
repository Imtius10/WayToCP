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
       int n,ans=0;
       cin>>n;
       int ar[101]={0};
       for (int i = 0; i < n; ++i)
       {
       	int x;
       	cin>>x;
       	//cout<<x<<" ";
       	ar[x]++;
       }
       // for (int i = 0; i < n; ++i)
       // {
       // 	cout<<ar[i]<<" ";
       // }
       // cout<<endl;
       for (int i = 0; i < 101; ++i)
       {
       	if (ar[i]!=0)
       	{
       		ar[i]--;
       	}
       	else 
       	{ans+=i;
       	break;}
       }
       for (int i = 0; i < 101; ++i)
       {
       	if (ar[i]!=0)
       	{
       		ar[i]--;
       	}
       	else {
       		ans+=i;
       		break;
       	}
       }
       cout<<ans<<endl;
     }
  return 0;
}