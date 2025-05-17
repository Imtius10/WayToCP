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
     	int i=0;
       vector<pair<int,int>> v(4);
       for(auto& x:v){

       	x.first=i;
       	i++;
       	cin>>x.second;
       }
       sort(v.begin(),v.end());
       for (auto& x:v)
       {
       	cout<<x.first<<" "<<x.second<<nl;
       }

     }
  return 0;
}