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
     int n; 
     cin>>n;
     vector<int>ans;
     int a=1,b=n*n;
     int x=0;
      for (int i = 1; i <=n*n; ++i)
      {
        if (i%2==1)
        {
        //  cout<<i<<" ";
          ans.push_back(a);
          a++;
        }
        else{
         // cout<<i<<" ";

          ans.push_back(b);
          b--;
        }
      }
      for (int i = 1; i <=n; ++i)
      {
        if (i%2==1)
        {
          for (int j = x; j < n+x; ++j)
          {
            cout<<ans[j]<<" ";
          }
          x+=n;
          cout<<endl;
        }
        else {
          for (int j = x+n-1; j >=x; --j)
          {
           cout<<ans[j]<<" ";
          }
          x+=n;
          cout<<endl;
        }

      }
      //cout<<endl;
     }
  return 0;
}