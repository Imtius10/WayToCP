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
     int n;
     cin>>n;
     string str;
     cin>>str;
     int cmp;
     string str1;
     str1=str;
     reverse(str.begin(),str.end());
     cmp=str1.compare(str);
     if (cmp<=0)
     {
         cout<<str1<<endl;
     }
     else cout<<str<<str1<<endl;
     }
  return 0;
}