#include<bits/stdc++.h>
#include<algorithm>
#include<limits.h>
#include <cmath>
#include <map>
// #define int long long
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
       int n,m,temp=0;
       cin>>n>>m;
       vector<string> str(n);
       string check="vika";
       bool flag;
       for (int i = 0; i < n; ++i)
       {
       	cin>>str[i];
       }
       for (int i = 0; i < m; ++i)
       {
       	flag=false;
       	for (int j = 0; j < n; ++j)
       	{
       		if (str[j][i]==check[temp])
       		{
       			flag=1;
       		}
       		
       	}
       	if (flag)
       	{
       		temp++;
       	}
       	if (temp==4)
       	{
       		break;
       	}
       }
       if (temp==4)
       {
       	cout<<"YES"<<endl;
       }
       else cout<<"NO"<<endl;
     }
  return 0;
}