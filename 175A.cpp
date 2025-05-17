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
          int n,ans=3; cin>>n;
          int temp=(n/15);
          ans+=(temp*3);
         if (n%5==0 and n%3==0)
         {
           cout<<ans-2<<nl;
         }
         else if (n%5==1 and n%3==1)
         {
           cout<<ans-1<<nl;
         }
         else cout<<ans<<nl;
     
         }
      return 0;
    }