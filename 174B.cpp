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
       int n,m,ans=0; cin>>n>>m;
       int ar[n][m];
       map<int,int>br;
       int temp=INT_MIN;
       for (int i = 0; i < n; ++i)
       {
         for (int j = 0; j < m; ++j)
         {
           cin>>ar[i][j];
           int x=ar[i][j];
           br[x]=1;
           if (j and ar[i][j]==ar[i][j-1] )
           {
             br[x]=2;
           }
            if (i and ar[i][j]==ar[i-1][j] )
           {
             br[x]=2;
           }
         }
       }
       
       for (auto& i:br)
       {
        ans+=i.second;
        temp=max(temp,i.second);
       }
       cout<<ans-temp<<nl;
     }
  return 0;
}