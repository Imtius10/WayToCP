#include<bits/stdc++.h>
#include<limits.h>
#define nl "\n"
#define MX INT_MIN
#define pb push_back

using namespace std;

void leftmex(int cnt,int n,int mx){
	int x;
	cin>>x;
 if (cnt==n)
 {
 	return;
 }
 if (cnt==0)
 {
 	cout<<x<<" ";
 	mx=x;
 }
 else {
 	mx=max(mx,x);
 	cout<<mx<<" ";
 }

 return leftmex(cnt+1,n,mx);
}
int main()
{
  #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
  #endif
  int mx=-1;
  int n; cin>>n;
  leftmex(0,n,mx);
  return 0;
}