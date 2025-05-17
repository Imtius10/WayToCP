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
  int t=1;;
 while(1){
 	if ((7*t)%8==1)
 	{
 		cout<<t;
 		break;
 	}
   t++;
 }
  return 0;
}