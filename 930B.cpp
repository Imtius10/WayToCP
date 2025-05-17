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
      int n,flag=1,i;
      cin>>n;
      string str1,str2;
      cin>>str1>>str2;
      for ( i = 1; i < n; ++i)
      {
      	if (str1[i]==str2[i-1]) flag++;
      	else if (str1[i]<str2[i-1]) flag=1;
      	else break;
      }
      for (int j = 0; j < i; ++j) cout<<str1[j];
      	for (int j = i-1; j < n; ++j) cout<<str2[j];
      cout<<"\n"<<flag<<endl;
     }
  return 0;
}