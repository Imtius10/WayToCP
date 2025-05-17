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
     int n; cin>>n;
     int x=0;
     string str; cin>>str;
     vector<char>temp;
     set<char>s;
     for (int i = 0; i < n; ++i)
     {
     	s.insert(str[i]);
     }
     for(auto& i:s){

     	temp.push_back(i);
     	
     }
    // reverse(temp.begin(),temp.end());
     for (int i = 0; i < str.size(); ++i)
     {
     	for (int j = 0; j < temp.size(); ++j)
     	{
     		if (str[i]==temp[j])
     		{
     			cout<<temp[temp.size()-(j+1)];
     			break;
     		}
     	}
     	
     }
     cout<<nl;
     }
  return 0;
}