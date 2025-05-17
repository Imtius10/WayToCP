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
       int sum=0;
       int temp=n;
       for (int i = 1; i <=n; ++i)
       {
       	sum+=abs(temp-i);
       	temp--;
       }
       cout<<(sum/2)+1<<nl;
     }
  return 0;
}