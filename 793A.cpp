#include<bits/stdc++.h>
#define nl "\n"
#define pb push_back
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
     while(t--){
       int n; cin>>n;
       string str;
       cin>>str;
       int cnt=0;
       int mid;
       mid=(n)/2;
       for (int i = mid; i < n; ++i)
       {
       	if (str[mid]==str[i])
       	{
       		//cout<<str[i]<<" ";
       		cnt++;
       	}
       	else break;
       }
      // cout<<mid<<nl;
       cout<<2*cnt-(n&1)<<nl;
     }
  return 0;
}