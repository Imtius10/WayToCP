#include<bits/stdc++.h>
#define nl "\n"
#define pb push_back
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  vector<int>num={4,9,5};
  vector<int>num2={9,4,9,8,4};
  unordered_map<int,int>mp;
  vector<int>result={};
  
  for (int i = 0; i < num2.size(); ++i)
  {
  	int x=num2[i];
  	mp[x]++;
  	//cout<<x<<nl;
  }
  cout<<mp[4];
 
  for(auto &v:num){

  	if (mp[v]>0)
  	{
  		result.push_back(v);
  		mp[v]--;
  	}
  }
  for (int i = 0; i < result.size(); ++i)
  {
  	cout<<result[i]<<nl;
  }
  return 0;
}