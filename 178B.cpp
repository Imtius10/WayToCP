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
       vector<int>v;
       long long sum=0;
       for (int i = 0; i < n; ++i)
       {
        int x;
        cin>>x;
       	v.push_back(x);
       }
       sort(v.begin(),v.end());
       cout<<v[n-1]<<" ";
       sum=v[n-1];
       for (int i = n-2; i >= 0; --i)
       {
       sum+=v[i];
       cout<<sum<<" ";
       }
       cout<<nl;
     }
  return 0;
}