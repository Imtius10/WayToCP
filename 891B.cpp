#include<iostream>
#include<algorithm>
#include<limits.h>
#include <cmath>
#include <map>
#define int long long
#define nl "\n"
#define pb push_back
using namespace std;
int32_t main()
{
  #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
  #endif
  int t;
  cin>>t;
     while(t--){
       string str;
       cin>>str;
       str="0"+str;
     
       int n=str.size();
       for (int i = n; i>=0; --i)
       {
       	 if (str[i]-'0'>=5)
       	 {
       	 	continue;
       	 }
       	 else {
       	 	for (int j = i; j <n; ++j)
       	 	{
       	 		if (str[i]-'0'==9)
       	 		{
       	 			str[j]='0';
       	 		}
       	 		else str[j]++;
       	 	}
       	 }
       }
       cout<<str<<endl;      
     }
  return 0;
}