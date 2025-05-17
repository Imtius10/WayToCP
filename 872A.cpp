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
      string s;
      cin>>s;
      int ar[27]={};
      int uniq=0;
      for (int i = 0; i < s.length(); ++i)
      {
      	char a=s[i];
      	if (ar[a-97]==0)
      	{
      		ar[(a-97)]++;;
      		uniq++;
      	}
      }
      if (uniq==1) cout<<"-1"<<nl;
     else cout<<(s.length()-1)<<nl;
     }
  return 0;
}