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
       int n,m; cin>>n>>m;
       string str; cin>>str;
       vector<int>ar(7,m);
       for (int i = 0; i < str.size(); ++i)
       {
       	ar[str[i]-'A']--;
       	ar[str[i]-'A']=max(0,ar[str[i]-'A']);
       	
       }
       cout<<accumulate(ar.begin(),ar.end(),0)<<nl;
     }
  return 0;
}