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
       long long n,sum=0;
       long long mx=INT_MIN;
       cin>>n;
       int ar1[n],ar2[n];
       for (int i = 0; i < n; ++i)
       {
       	 int x;
       	 cin>>x;
       	 sum+=x;
       }
       for (int i = 0; i < n; ++i)
       {
       	 int x;
       	 cin>>x;
       	 if (mx<x)
       	 {
       	 	mx=x;
       	 }
       	 sum+=x;
       }
       cout<<sum-mx<<endl;
     }
  return 0;
}