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
 
    int n, chk = 0, neg = 0,zero=0,big=0;
    cin >> n;
    int ar[n], br[n];
    for (int i = 0; i < n; ++i)
    {
      cin >> ar[i];
      br[i] = ar[i];
      if (ar[i] == 0)
      {
        zero++;
      }
      if (ar[i] < 0)
      {
        neg++;
      }
      if(i and abs(ar[0])<=abs(ar[i])) big++; 
    }
    sort(br, br + n);
    int temp = (n+1) / 2;
    if ((big+1)>=temp)
    {
     cout<<"YES"<<nl;
    }
    else cout<<"NO"<<nl;
    
 // cout<<temp<<" "<<big<<nl;
    
    
     }
  return 0;
}