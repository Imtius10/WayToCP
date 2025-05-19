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
      int n,mx=-1; cin>>n;
      int ar[n];
      set<int>st;
      for (int i = 0; i < n; ++i)
      {
        cin>>ar[i];
        st.insert(ar[i]);
        mx=max(mx,ar[i]);
      }
      if (st.size()==1)
      {
        cout<<"NO";
      }
      else{
        cout<<"YES"<<nl;
      for (int i = 0; i < n; ++i)
      {
        
        if (ar[i]==mx)
        {
         cout<<1<<" ";
        }
        else cout<<2<<" ";
      }
    }
    cout<<nl;
     }
  return 0;
}