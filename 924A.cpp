#include<bits/stdc++.h>
#include<limits.h>
#define nl "\n"
#define pb push_back
using namespace std;
int main()
{
  #ifndef ONLINE_JUDGE
   freopen("output.txt","w",stdout);
   freopen("input.txt","r",stdin);
  #endif
  int t;
  cin>>t;
     while(t--){
     int a,b;
     cin>>a>>b;
    if (a>b)
    {
    	swap(a,b);
    }
    if (((a%2==1 and b%2==1)) || (a%2==1 and b==a*2))
    {
    	cout<<"No"<<endl;
    }
    else cout<<"YES"<<endl;
     }
  return 0;
}